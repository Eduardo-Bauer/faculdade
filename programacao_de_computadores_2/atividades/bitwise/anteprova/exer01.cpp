#include <stdio.h>

void escreve_bits(int n){
	int i;
	for(i=31;i>=0;i--){
		printf("%d ", n>>i & 1);
	}
}

int main(){
	int n = 65, bit;
	escreve_bits(n);
}

