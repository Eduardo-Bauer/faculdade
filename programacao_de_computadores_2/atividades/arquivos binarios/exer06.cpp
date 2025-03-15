#include<stdio.h>
#include<stdlib.h>

struct data{
	int dia;
	int mes;
	int ano;
};
typedef struct data DATA;

struct livro{
	char nome[50];
	char autor[50];
	DATA data;
};
typedef struct livro LIVRO;

int main(){
	LIVRO teste, maisantigo, maisnovo;
	int cont=0;
	FILE *entrada = fopen("questao6.bin", "rb");
	if(entrada == NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&teste, sizeof(LIVRO), 1, entrada)){
		cont++;
	}
	LIVRO *livros = (LIVRO*)malloc(cont*sizeof(LIVRO));
	if(livros==NULL){
		printf("ERRO\n");
		exit(0);
	}
	rewind(entrada);
	cont = 0;
	while(fread(&livros[cont], sizeof(LIVRO), 1, entrada)){
		if(cont==0){
			maisantigo = livros[cont];
			maisnovo = livros[cont];
		}else{
			if(livros[cont].data.ano < maisnovo.data.ano){
				maisnovo = livros[cont];
			}else{
				if(livros[cont].data.ano == maisnovo.data.ano && livros[cont].data.mes < maisnovo.data.mes){
					maisnovo = livros[cont];
				}else{
					if(livros[cont].data.ano == maisnovo.data.ano && livros[cont].data.mes == maisnovo.data.mes && livros[cont].data.dia < maisnovo.data.dia){
						maisnovo = livros[cont];
					}
				}
			}
			if(livros[cont].data.ano > maisantigo.data.ano){
				maisantigo = livros[cont];
			}else{
				if(livros[cont].data.ano == maisantigo.data.ano && livros[cont].data.mes > maisantigo.data.mes){
					maisantigo = livros[cont];
				}else{
					if(livros[cont].data.ano == maisantigo.data.ano && livros[cont].data.mes == maisantigo.data.mes && livros[cont].data.dia > maisantigo.data.dia){
						maisantigo = livros[cont];
					}
				}
			}
		}
		cont++;
	}
	printf("Livro Mais Antigo\nTitulo: %s\nAutor: %s\nEdicao: %02d/%02d/%02d\n", maisantigo.nome, maisantigo.autor, maisantigo.data.dia, maisantigo.data.mes, maisantigo.data.ano);
	printf("\n");
	printf("Livro Mais Novo\nTitulo: %s\nAutor: %s\nEdicao: %02d/%02d/%02d\n", maisnovo.nome, maisnovo.autor, maisnovo.data.dia, maisnovo.data.mes, maisnovo.data.ano);
	fclose(entrada);
}
