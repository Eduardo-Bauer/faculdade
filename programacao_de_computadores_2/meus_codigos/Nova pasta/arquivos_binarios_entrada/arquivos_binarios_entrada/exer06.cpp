#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pais{
	char nome[50];
	int o, p, b;
};
typedef struct pais PAIS;

int main(){
	FILE *entrada = NULL;
	FILE *saida = NULL;
	int qtd, i, j, ouro, prata, bronze;
	PAIS aux;
	
	entrada = fopen("questao6.txt", "r");
	saida = fopen("saidaquestao6.txt", "w");
	
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	if(saida==NULL){
		printf("ERRO\n");
		exit(0);
	}
	
	fscanf(entrada, "%d\n", &qtd);
	
	PAIS *medalha = (PAIS*)malloc(qtd*sizeof(pais));
	
	if(medalha==NULL){
		printf("ERRO\n");
		exit(0);
	}
	
	for(i=0;i<qtd;i++){
		fgets(medalha[i].nome, 50, entrada);
		int pos = strlen(medalha[i].nome) - 1;
		medalha[i].nome[pos] = '\0';
		fscanf(entrada, "%d %d %d\n", &medalha[i].o, &medalha[i].p, &medalha[i].b);
	}
	
	for(i=0;i<qtd-1;i++){
		for(j=i+1;j<qtd;j++){
			if(medalha[i].o < medalha[j].o){
				aux = medalha[i];
				medalha[i] = medalha[j];
				medalha[j] = aux;
			}else{
				if(medalha[i].o == medalha[j].o && medalha[i].p < medalha[j].p){
					aux = medalha[i];
					medalha[i] = medalha[j];
					medalha[j] = aux;
				}else{
					if(medalha[i].o == medalha[j].o && medalha[i].p == medalha[j].p && medalha[i].b < medalha[j].b){
						aux = medalha[i];
						medalha[i] = medalha[j];
						medalha[j] = aux;
					}else(medalha[i].o == medalha[j].o && medalha[i].p == medalha[j].p && medalha[i].b == medalha[j].b && strcasecmp(medalha[i].nome, medalha[j].nome)>0);{
						aux = medalha[i];
						medalha[i] = medalha[j];
						medalha[j] = aux;
					}
				}
			}
		}
	}
	
	for(i=0;i<qtd;i++){
		fprintf(saida, "%s %d %d %d\n", medalha[i].nome, medalha[i].o, medalha[i].p, medalha[i].b);
	}
	
	fclose(entrada);
	fclose(saida);
}
