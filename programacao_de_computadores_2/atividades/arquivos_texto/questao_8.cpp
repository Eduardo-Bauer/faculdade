#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0, j, cont=0, cont2=0, n, aux, total;
	FILE *entrada1 = fopen("exer0801.txt", "r");
	FILE *entrada2 = fopen("exer0802.txt", "r");
	FILE *saida = fopen("saidaexer08.txt", "w");
	if(entrada1==NULL||entrada2==NULL||saida==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fscanf(entrada1, "%d\n", &n)==1){
		cont++;
	}
	while(fscanf(entrada2, "%d\n", &n)==1){
		cont2++;
	}
	total = cont+cont2;
	int vet[total];
	
	rewind(entrada1);
	rewind(entrada2);
	while(fscanf(entrada1, "%d\n", &n)==1){
		vet[i++] = n;
	}
	while(fscanf(entrada2, "%d\n", &n)==1){
		vet[i++] = n;
	}
	for(i=0;i<total-1;i++){
		for(j=i+1;j<total;j++){
			if(vet[j] < vet[i]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	for(i=0;i<cont+cont2;i++){
		fprintf(saida, "%d\n", vet[i]);
	}
}
