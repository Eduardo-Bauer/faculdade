#include <stdio.h>

void bit(int numero){
	int i;
	for(i=31; i>=0; i--){
		int bit = (numero >> i) & 1;
		printf("%d ", bit);
	}
	printf("\n");
}

int main(){
	int numero;
	printf("digite o valor de n\n");
	scanf("%d", &numero);
	bit(numero);
}
