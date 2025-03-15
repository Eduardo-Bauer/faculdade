#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *entrada = NULL;
	FILE *saida = NULL;
	int codigo, qtd, i;
	float media, n;
	
	entrada = fopen("questao7.txt", "r");
	saida = fopen("saidaquestao7.txt", "w");
	
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	if(saida==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fscanf(entrada, "%d %d", &codigo, &qtd) == 2){
		media = 0;
		for(i=0;i<qtd;i++){
			fscanf(entrada, "%f", &n);
			media += n;
		}
		media = media / qtd;
		fprintf(saida, "% 5d %d\t%.1f\n", codigo, qtd, media);
		
	}
	fclose(entrada);
	fclose(saida);
}
