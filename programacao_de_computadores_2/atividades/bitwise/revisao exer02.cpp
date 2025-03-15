#include <stdio.h>

int compactahora(int hora, int minuto, int segundo){
	int codi = 0x00000000;
	codi = hora;
	codi = (codi<<8) | minuto;
	codi = (codi<<8) | segundo;
	return codi;
}

int main(){
	int hora, minuto, segundo;
	printf("dogite a hora, minuto e segundo\n");
	scanf("%d %d %d", &hora, &minuto, &segundo);
	int horacodificada = compactahora(hora, minuto, segundo);
	printf("0x%x %d\n", horacodificada, horacodificada);
}
