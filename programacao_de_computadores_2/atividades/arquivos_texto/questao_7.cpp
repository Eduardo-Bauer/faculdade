#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigo, qtd, i;
	float media, numero;
	FILE *entrada = fopen("exer07.txt", "r");
	FILE *saida = fopen("saidaexer07.txt", "w");
	if(entrada == NULL || saida == NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fscanf(entrada, "%d %d", &codigo, &qtd)==2){
		media = 0;
		for(i=0;i<qtd;i++){
			fscanf(entrada, "%f", &numero);
			media += numero;
		}
		media /= qtd;
		fprintf(saida, "%4d  %d %.1f\n", codigo, qtd, media);
	}
	fclose(entrada);
	fclose(saida);
}
