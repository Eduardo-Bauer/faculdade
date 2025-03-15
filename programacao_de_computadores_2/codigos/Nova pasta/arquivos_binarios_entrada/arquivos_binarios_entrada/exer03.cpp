#include <stdlib.h>
#include <stdio.h>

struct estado{
            char nome[31];
            int numveic;
            int numacid;
};
typedef struct estado ESTADO;

ESTADO estado_maior_numero_acidentes(char *arquivo){
	FILE *f = fopen(arquivo, "r");
	ESTADO maior, e;// o e e para receber a struct do arquivo
	maior.	numacid = 0;
	if(f==NULL){
		printf("ERRO AO ABRIR\n");
		exit(0);
	}
	while(fread(&e, sizeof(ESTADO), 1, f)){
		if(e.numacid > maior.numacid){
			maior = e;
		}
	}
	fclose(f);
	return maior;
}
int main(){
	char arquivo[80] = "questao3.bin";
	ESTADO maior = estado_maior_numero_acidentes(arquivo);
	printf("%s\n", maior.nome);
}
