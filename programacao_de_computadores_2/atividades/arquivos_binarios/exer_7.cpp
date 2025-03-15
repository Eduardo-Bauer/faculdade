#include<stdio.h>
#include<stdlib.h>

struct data{
	int dia;
	int mes;
	int ano;
};
typedef struct data DATA;

struct funcionario{
	int codigo;
	char nome[50];
	DATA nascimento;
	float valor_hora;
};
typedef struct funcionario FUNCIONARIO;

int main(){
	FUNCIONARIO teste;
	int codigo, cont=0, i;
	float valor;
	int existe = 0;
	FILE *entrada = fopen("questao7.bin", "rb+");
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&teste, sizeof(FUNCIONARIO), 1, entrada)){
		cont++;
	}
	FUNCIONARIO *funci = (FUNCIONARIO*)malloc(cont*sizeof(FUNCIONARIO));
	if(funci==NULL){
		printf("ERRO\n");
		exit(0);
	}
	rewind(entrada);
	cont = 0;
	while(fread(&funci[cont], sizeof(FUNCIONARIO),1, entrada)){
		printf("CODIGO %d\nNOME %s\nVALOR POR HORA %.2f\n", funci[cont].codigo, funci[cont].nome, funci[cont].valor_hora);
		cont++;
	}
	printf("---------------------\n");
	printf("digite o codigo do funcionario para alterar o valor\n");
	scanf("%d", &codigo);
	for(i=0;i<cont;i++){
		if(codigo==funci[i].codigo){
			printf("digite o novo valor_hora:\n");
			scanf("%f", &valor);
			funci[i].valor_hora = valor;
			existe = 1;
			break;
		}
	}
	if(existe){
		fclose(entrada);
		entrada = fopen("questao7.bin", "wb");
		if(entrada == NULL){
			printf("ERRO\n");
			exit(0);
		}
		for(i=0;i<cont;i++){
			fwrite(&funci[i], sizeof(FUNCIONARIO), 1, entrada);
		}
		fclose(entrada);
		entrada = fopen("questao7.bin", "rb");
		while(fread(&funci[cont], sizeof(FUNCIONARIO),1, entrada)){
			printf("CODIGO %d\nNOME %s\nVALOR POR HORA %.2f\n", funci[cont].codigo, funci[cont].nome, funci[cont].valor_hora);
			cont++;
		}
		fclose(entrada);
	}else{
		fclose(entrada);
		printf("nao exite o funcionario com o cogido mencionado\n");
		exit(0);
	}
}
