#include <stdio.h>
#include <string.h>
#define N 3

struct aluno{
	char nome[50];
	float notas[3];
};
typedef struct aluno ALUNO;

void le_aluno(ALUNO v[N]){
	int i;
	for(i=0; i<N; i++){
		printf("Digite o nome:\n");
		gets(v[i].nome);
		printf("Digite as notas:\n");
		scanf("%f %f %f", &v[i].notas[0], &v[i].notas[1], &v[i].notas[2]);
		getchar();
	}
}

void escreve_alunos(ALUNO v[N]){
	int i, j;
	ALUNO auxA;
	float auxf, media[N];
	for(i=0; i<N; i++){
		media[i] = (v[i].notas[0] + v[i].notas[1] + v[i].notas[2]) / 3;
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N-1; j++){
			if(media[j] < media[j+1]) {
				auxf = media[j];
				media[j] = media[j+1];
				media[j+1] = auxf;
				auxA = v[j];
				v[j] = v[j+1];
				v[j+1] = auxA;
			}
			else if( media[j] == media[j+1]){
				if ( strcasecmp(v[j].nome, v[j+1].nome) > 0) {
					auxA = v[j];
					v[j] = v[j+1];
					v[j+1] = auxA;
				}
			}	 							
		}
	}
	
	for(i=0; i<N; i++){
		printf("Nome:%s\n", v[i].nome);
		printf("Media das notas: %.2f\n", media[i]);
	}
}

int main(){
	ALUNO v[N];
	le_aluno(v);
	escreve_alunos(v);
}
