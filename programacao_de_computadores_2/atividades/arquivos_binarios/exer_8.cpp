#include <stdio.h>
#include <stdlib.h>

int main (){
	int cont=0;
	int aux, aux1, n, i=0, j;
	FILE *entrada = fopen("questao8.bin", "rb");
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&aux, sizeof(int), 1, entrada)){
		printf("%d\n", aux);
		cont++;
	}
	printf("cont %d\n", cont);
	int vetor[cont+1];
	printf("digite o valor para add\n");
	scanf("%d", &n);
	rewind(entrada);
	while(fread(&vetor[i], sizeof(int), 1, entrada)){
		i++;
	}
	printf("%d\n", i);
	vetor[i+1] = n;
	for(i=0;i<cont;i++){
		for(j=i+1;j<cont+1;j++){
			if(vetor[i]>vetor[j]){
				aux = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = aux;
			}
		}
	}
	entrada = fopen("questao8.bin", "wb");
	for(i=0;i<cont+1;i++){
		fwrite(&vetor[i], sizeof(int), 1, entrada);
	}
	fclose(entrada);
	entrada = fopen("questao8.bin", "rb");
	while(fread(&aux, sizeof(int), 1, entrada)){
		printf("%d\n", aux);
	}
}

