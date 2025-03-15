#include <stdio.h>

void descompactahora(int horacompactada, int *hora, int *minuto, int *segundo){
	*segundo = horacompactada & 0x0000ff;
	*minuto = (horacompactada & 0x0000ff00)>>8;
	*hora = (horacompactada & 0x00ff0000)>>16;
}

int main(){
	int horacompactada, hora, minuto, segundo;
	printf("digite o valor compactado\n");
	scanf("%d", &horacompactada);
	descompactahora(horacompactada, &hora, &minuto, &segundo);
	printf("%d/%d/%d\n", hora, minuto, segundo);
}
