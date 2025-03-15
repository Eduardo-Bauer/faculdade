#include<stdio.h>
#include<stdlib.h>

int main(){
	int vetor[6] = {0};
	int i, j, n;
	FILE *entrada = fopen("questao2.bin", "rb");
	FILE *saida = fopen("saidaexer02.txt", "w");
	if(entrada == NULL || saida == NULL){
		printf("ERRO\n");
	}
	
	while(fread(&n, sizeof(int), 1, entrada)){
		vetor[n]++;
	}
	
	for(i=1;i<6;i++){
		fprintf(saida, "%d ", i);
		for(j=0;j<vetor[i];j++){
			fprintf(saida, "*");
		}
		fprintf(saida, "\n");
	}
	fclose(entrada);
	fclose(saida);
}
