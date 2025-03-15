#include <stdio.h>

char rodaparaesquerda(char n, char nbits){
	char i;
	i = n>>8-nbits;
	n = n<<nbits;
	n = n | i;
	return n;
}

int main(){
	char n = 77;
	char nbits = 3;
	char roda = rodaparaesquerda(n, nbits);
	printf("%d\n", roda);
}
