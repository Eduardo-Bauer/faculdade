#include <stdio.h>

int crossover(int n, int m){
	int cross = n & 0xffff0000;
	cross |= m & 0x0000ffff;
	return cross;
}

int main(){
	int n, m;
	printf("digite o primerio valor\n");
	scanf("%d", &n);
	printf("digite o segundo valor\n");
	scanf("%d", &m);
	int novo = crossover(n, m);
	printf("%d 0x%x\n", n, n);
	printf("%d 0x%x\n", m, m);
	printf("%d 0x%x\n", novo, novo);
}
