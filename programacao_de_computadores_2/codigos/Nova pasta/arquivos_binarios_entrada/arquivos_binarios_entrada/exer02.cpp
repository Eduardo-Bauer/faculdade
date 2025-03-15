#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f = NULL;
	int vet[6] = {0};
	int n, i, j;
	
	f = fopen("questao2.bin", "rb" );
	
	if(f==NULL){
		printf("ERRO AO ABRIR\n");
		exit(0);
	}
	
	while(fread(&n, sizeof(int), 1, f)){
		vet[n]++;
	}
	
	FILE *o = fopen("quest2.txt", "w");
	
	if(o==NULL){
		printf("ERRO AO ABRIR\n");
		exit(0);
	}
	
	for(i=1;i<=5;i++){
		fprintf(o, "%d ", i);
		for(j=0;j<vet[i];j++){
			fprintf(o, "%c", '*');
		}
		fprintf(o, "\n");
	}
	
	fclose(f);
	fclose(o);
}
