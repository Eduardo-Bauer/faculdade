#include <stdio.h>

char minuscula(char c){
	if(c>='A' && c<='Z'){
		c = c | 32;
	}
	return c;
}

int main(){
	char c;
	printf("digite o caracter\n");
	scanf("%c", &c);
	c = minuscula(c);
	printf("%c\n", c);
}
