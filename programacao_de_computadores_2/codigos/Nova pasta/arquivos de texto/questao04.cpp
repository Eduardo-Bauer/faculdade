#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct compra{
	char nome[50];
	float valor;
	int quant;
};
typedef struct compra COMPRA;

int main(){
	int n, i, j, n1;
	float total = 0;
	FILE *entrada = fopen("exer04.txt", "r");
	FILE *saida = fopen("saidaexer03.txt", "w");
	if(entrada == NULL || saida == NULL){
		printf("ERRO em abrir\n");
		exit(0);
	}
	fscanf(entrada, "%d\n", &n);
	printf("%d\n", n);
	COMPRA *itens = (COMPRA *)malloc(n*sizeof(COMPRA));
	if(itens == NULL){
		printf("ERRO na entrada\n");
		exit(0);
	}
	for(i=0;i<n;i++){
		fscanf(entrada, "%s %f\n", itens[i].nome, &itens[i].valor);
		printf("%s\n", itens[i].nome);
	}
	fscanf(entrada, "%d\n", &n1);
	printf("%d\n", n1);
	COMPRA *comprado = (COMPRA *)malloc(n1*sizeof(COMPRA));
	if(comprado==NULL){
		printf("ERRO\n");
		exit(0);
	}
	for(i=0;i<n1;i++){
		fscanf(entrada, "%s %d", comprado[i].nome, &comprado[i].quant);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			if(strcmp(itens[i].nome, comprado[j].nome)==0){
				total += itens[i].valor * comprado[j].quant;
				break; 
			}
		}
	}
	fprintf(saida, "%f\n", total);
	fclose(entrada);
	fclose(saida);
}
