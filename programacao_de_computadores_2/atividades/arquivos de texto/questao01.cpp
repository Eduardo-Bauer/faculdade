#include<stdio.h>
#include<stdlib.h>

int main(){
	int aprovados = 0, reprovados = 0;
	float nota1, nota2, nota3, media;
	char nome[50];
	FILE *entrada = fopen("exer01.txt", "r");
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fgets(nome, 50, entrada)>0){
		media = 0;
		fscanf(entrada, "%f %f %f\n", &nota1, &nota2, &nota3);
		media = (nota1 + nota2 + nota3)/3;
		if(media >= 6){
			aprovados++;
		}else{
			reprovados++;
		}
	}
	printf("Aprovados: %d\n", aprovados);
	printf("Reprovados: %d\n", reprovados);
	fclose(entrada);
}
