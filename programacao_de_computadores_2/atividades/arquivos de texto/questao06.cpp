#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pais{
	char nome[50];
	int ouro;
	int prata;
	int bronze;
};
typedef struct pais PAIS;

int main(){
	int n, i, j;
	PAIS aux;
	FILE *entrada = fopen("exer06.txt", "r");
	FILE *saida = fopen("saidaexer06.txt", "w");
	if(entrada==NULL || saida==NULL){
		printf("ERRO\n");
		exit(0);
	}
	fscanf(entrada, "%d\n", &n);
	PAIS *pais = (PAIS*)malloc(n*sizeof(PAIS));
	if(pais==NULL){
		printf("ERRO\n");
		exit(0);
	}
	for(i=0;i<n;i++){
		fgets(pais[i].nome, 50, entrada);
		pais[i].nome[strlen(pais[i].nome)-1]='\0';
		fscanf(entrada, "%d %d %d\n", &pais[i].ouro, &pais[i].prata, &pais[i].bronze);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(pais[j].ouro > pais[i].ouro){
				aux = pais[i];
				pais[i] = pais[j];
				pais[j] = aux;
			}else{
				if(pais[j].ouro == pais[i].ouro && pais[j].prata > pais[i].prata){
					aux = pais[i];
					pais[i] = pais[j];
					pais[j] = aux;
				}else{
					if(pais[j].ouro == pais[i].ouro && pais[j].prata == pais[i].prata && pais[j].bronze > pais[i].bronze){
						aux = pais[i];
						pais[i] = pais[j];
						pais[j] = aux;
					}else{
						if(pais[j].ouro == pais[i].ouro && pais[j].prata == pais[i].prata && pais[j].bronze == pais[i].bronze && strcmp(pais[i].nome, pais[j].nome)>0){
							aux = pais[i];
							pais[i] = pais[j];
							pais[j] = aux;
						}
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		fprintf(saida, "%s %d %d %d\n", pais[i].nome, pais[i].ouro, pais[i].prata, pais[i].bronze);
	}
	fclose(entrada);
	fclose(saida);
}
