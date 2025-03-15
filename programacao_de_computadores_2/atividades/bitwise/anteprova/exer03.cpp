#include <stdio.h>

int crossover(int n1, int n2){
	int x;
	x = n1>>16;
	x = (x<<16) | (n2 & 0x0000ffff);
	return x;
}

int main(){
	int n1 = 305419896, n2 = 1737075661;
	int x = crossover(n1, n2);
	printf("%d %x\n", x, x);
}
