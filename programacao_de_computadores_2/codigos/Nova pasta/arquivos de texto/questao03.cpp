#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
	char cpf[30];
	char nome[50];
	float salario;
	char funci[20];
};
typedef struct pessoa PESSOA;

int main(){
	int n, i, j;
	PESSOA aux;
	FILE *entrada = fopen("exer03.txt", "r");
	FILE *saida = fopen("saidaexer03.txt", "w");
	if(entrada == NULL || saida == NULL){
		printf("ERRO\n");
		exit(0);
	}
	fscanf(entrada, "%d\n", &n);
	PESSOA *ordem = (PESSOA*)malloc(n * sizeof(PESSOA));
	for(i=0;i<n;i++){
		fgets(ordem[i].cpf, 30, entrada);
	ordem[i].cpf[strlen(ordem[i].cpf)-1]='\0';
		fgets(ordem[i].nome, 50, entrada);
	ordem[i].nome[strlen(ordem[i].nome)-1]='\0';
		fscanf(entrada, "%f\n", &ordem[i].salario);
		fgets(ordem[i].funci, 20, entrada);
	ordem[i].funci[strlen(ordem[i].funci)-1]='\0';

	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(ordem[i].nome, ordem[j].nome)>0){
				aux = ordem[i];
				ordem[i] = ordem[j];
				ordem[j] = aux;
			}
		}
	}
	for(i=0;i<n;i++){
		fprintf(saida, "%s\n%s\n%.2f\n%s\n", ordem[i].cpf, ordem[i].nome, ordem[i].salario, ordem[i].funci);
	}
}
