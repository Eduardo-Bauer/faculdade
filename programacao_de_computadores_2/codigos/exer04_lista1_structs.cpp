#include<stdio.h>
#define N 2


struct data{
	int d;
	int m;
	int a;
};
typedef struct data DATA;

struct funcionario{
	int cod;
	char nome[50];
	DATA nasc;
	float sal;
};
typedef struct funcionario FUNC;

void le_funcionario(FUNC v[N]){
	int i;
	for(i=0; i<N; i++){
		printf("Digite o codigo:\n");
		scanf("%d", &v[i].cod);
		getchar();
		printf("Digite o nome:\n");
		gets(v[i].nome);
		printf("Digite a data de nascimento:\n");
		scanf("%d %d %d", &v[i].nasc.d, &v[i].nasc.m, &v[i].nasc.a);
		printf("Digite o salario:\n");
		scanf("%f", &v[i].sal);
	}
}

void escreve_funcionarios(FUNC v[N]){
	int i;
	for(i=0; i<N; i++){
		printf("Codigo: %d\n", v[i].cod);
		printf("Nome:%s\n", v[i].nome);
		printf("Nascimento: %02d/%02d/%04d\n", v[i].nasc.d, v[i].nasc.m, v[i].nasc.a);
		printf("Salario: %.2f\n", v[i].sal);
	}
}

FUNC mais_velho(FUNC v[N]){
	int i; 
	FUNC velho = v[0];
	for(i=1;i<N;i++){
		if(v[i].nasc.a*10000 + v[i].nasc.m*100 + v[i].nasc.d < velho.nasc.a*10000 + velho.nasc.m*100 + velho.nasc.d) {
			velho = v[i];
		}
	}
	return velho;
}

int main(){
	FUNC v[N];
	le_funcionario(v);
	escreve_funcionarios(v);
	FUNC velho = mais_velho(v);
	printf("------------------------\n");
	printf("%s %d/%d/%d\n", velho.nome, velho.nasc.d, velho.nasc.m, velho.nasc.a);
}
