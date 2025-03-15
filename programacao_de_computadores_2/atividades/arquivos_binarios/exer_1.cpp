#include <stdio.h>
#include <stdlib.h>

int main(){
	float media=0, n;
	int cont=0;
	FILE *entrada = fopen("questao1.bin", "rb");
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&n, sizeof(float), 1, entrada)){
		media += n;
		cont++;
	}
	media /= cont;
	printf("Media: %f\n cont %d", media, cont);
	fclose(entrada);
}
