#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos{
	char nome[50];
	float nota1, nota2, nota3;
};
typedef struct alunos ALUNOS;

int main(){
	ALUNOS teste, aux;
	int cont=0, i, j;
	FILE *entrada = fopen("questao5.bin", "rb");
	FILE *saida = fopen("saidaexer05.txt", "w");
	if(entrada == NULL || saida == NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&teste, sizeof(ALUNOS), 1, entrada)){
		cont++;
	}
	ALUNOS *alunos = (ALUNOS*)malloc(cont*sizeof(ALUNOS));
	if(alunos==NULL){
		printf("ERRO\n");
		exit(0);
	}
	float medias[cont], auxm;
	rewind(entrada);
	cont=0;
	while(fread(&alunos[cont], sizeof(ALUNOS), 1, entrada)){
		medias[cont] = (alunos[cont].nota1 + alunos[cont].nota2 + alunos[cont].nota3)/3;
		cont++;
	}
	for(i=0;i<cont-1;i++){
		for(j=i+1;j<cont;j++){
			if(medias[i] < medias[j]){
				aux = alunos[i];
				alunos[i] = alunos[j];
				alunos[j] = aux;
				auxm = medias[i];
				medias[i] = medias[j];
				medias[j] = auxm;
			}else{
				if(medias[i] == medias[j] && strcasecmp(alunos[i].nome, alunos[j].nome)>0){
					aux = alunos[i];
					alunos[i] = alunos[j];
					alunos[j] = aux;
					auxm = medias[i];
					medias[i] = medias[j];
					medias[j] = auxm;
				}
			}
		}
	}
	for(i=0;i<cont;i++){
		fprintf(saida, "%s %.1f\n", alunos[i].nome, medias[i]);
	}
	fclose(entrada);
	fclose(saida);
}
