#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float media (char *mat, char *arquivo){
	float p1, p2, p3;
	char aluno[50];
	FILE *entrada = fopen(arquivo, "r");
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fscanf(entrada, "%s %f %f %f\n", aluno, &p1, &p2, &p3)==4){
		if(strcmp(mat, aluno)==0){
			return (p1 + p2 + p3)/3;
		}
	}
	fclose(entrada);
	return -1;
}

int main(){
	char arquivo[50] = "exer02.txt";
	char mat[50];
	float mediaaluno;
	printf("digite o numero da matricula\n");
	scanf("%s", mat);
	mediaaluno = media(mat, arquivo);
	printf("Media: %.1f\n", mediaaluno);
	
}
