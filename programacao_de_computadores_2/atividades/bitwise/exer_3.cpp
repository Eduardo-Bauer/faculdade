#include <stdio.h>

char maiuscula(char c){
	if(c>='a' && c<='z'){
		c = c ^ 32;
	}
	return c;
}
int main(){
	char c;
	printf("digite o valor do caracter\n");
	scanf("%c", &c);
	c = maiuscula(c);
	printf("%c\n", c);
}
