#include <stdio.h>

int main(){
	int n1, n2;
	printf("digite o primeiro valor\n");
	scanf("%d", &n1);
	printf("digite o segundo valor\n");
	scanf("%d", &n2);
	n1 = n1 ^ n2;
	n2 = n2 ^ n1;
	n1 = n1 ^ n2;
	printf("numero1: %d, numero2: %d\n", n1, n2);
}
