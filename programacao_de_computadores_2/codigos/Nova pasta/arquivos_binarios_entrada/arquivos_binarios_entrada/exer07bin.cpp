#include<stdio.h>
#include<stdlib.h>

struct data {
     int dia;
     int mes;
     int ano;
};
typedef struct data DATA;

struct funcionario {
     int codigo;
     char nome[50];
     DATA nascimento;
     float valor_hora;
};
typedef struct funcionario FUNCIONARIO;

void mostra_arquivo(char *arquivo){
	FUNCIONARIO funci;
	FILE *entrada = NULL;
	entrada = fopen(arquivo, "rb");
	if(entrada==NULL){
		printf("erro\n");
		exit(0);
	}
	while(fread(&funci, sizeof(FUNCIONARIO),1, entrada)){
		printf("Cod: %d Nome: %s Salario: %.2f\n", funci.codigo, funci.nome, funci.valor_hora);
	}
	fclose(entrada);
}

void atualiza_arquivo(char *arquivo, int cod, float novo_valor){
	FUNCIONARIO funci;
	FILE *entrada = fopen(arquivo, "rb+");
	if(entrada == NULL){
		printf("ERRO\n");
		exit(0);
	}
	
	while(fread(&funci, sizeof(FUNCIONARIO), 1, entrada)){
		if(funci.codigo==cod){
			funci.valor_hora = novo_valor;
			fseek(entrada, -sizeof(FUNCIONARIO), SEEK_CUR);
			fwrite(&funci, sizeof(FUNCIONARIO), 1, entrada);
			break;
		}
	}
	fclose(entrada);
}

int main(){
	char arquivo[50] = "questao7.bin";
	int cod;
	float novo;
	mostra_arquivo(arquivo);
	printf("digite o codigo para alterar\n");
	scanf("%d", &cod);
	printf("digite o novo valor\n");
	scanf("%f", &novo);
	atualiza_arquivo(arquivo, cod, novo);
	mostra_arquivo(arquivo);
}
