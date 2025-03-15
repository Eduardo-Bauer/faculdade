#include <stdio.h>
#include <stdlib.h>

struct estado{
	char nome[31];
	int numveic;
	int numacid;
};
typedef struct estado ESTADO;

ESTADO estado_maior_numero_acidentes(char *arquivo){
	ESTADO vetor[26], maior;
	maior.numacid = 0;
	int cont=0;
	FILE *entrada = fopen(arquivo, "rb");
	if(entrada == NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&vetor[cont], sizeof(ESTADO), 1, entrada)){
		if(vetor[cont].numacid > maior.numacid){
			maior = vetor[cont];
		}
		cont++;
	}
	fclose(entrada);
	return maior;
}

int main(){
	char arquivo[80] = "questao3.bin";
	ESTADO maior = estado_maior_numero_acidentes(arquivo);
	printf("Nome: %s\nNumero de veiculos%d\nNumero de acidentes%d\n", maior.nome, maior.numveic, maior.numacid);
}
