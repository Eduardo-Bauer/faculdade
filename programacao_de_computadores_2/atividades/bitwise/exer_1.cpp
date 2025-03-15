#include<stdio.h>

int main(){
	int n;
	printf("digite o valor\n");
	scanf("%d", &n);
	if(n & 1){
		printf("Eh primo\n");
	}else{
		printf("Nao eh primo\n");
	}
}
