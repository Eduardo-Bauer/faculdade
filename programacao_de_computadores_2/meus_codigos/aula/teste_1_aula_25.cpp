#include<stdio.h>
#define n 100
/*toupper = add 32 e tolower = --32 (usa biblioteca = <ctype.h>*/
/*strlen = mesma coisa que a fun�ao tamanho (usa biblioteca = <string.h>*/

int tamanho(char str[n]){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
char minparamai(char c){
	if (c >= 'a' && c <= 'z'){
		c -= 32;
	}
	return c;
}
int palindrome(char str[n]){
	int i, f;
	for(i=0, f=tamanho(str)-1; i<f; i++, f--){
		if(minparamai(str[i])!=minparamai(str[i])){
			return 0;
		}
	}
	return 1;
}

int main(){
	char str[n];
	
	printf("digite a string:\n");
	gets(str);
	
	if(palindrome(str)){
		printf("%s, eh palindrome\n", str);
	}else{
		printf("%s, nao eh palindrome\n", str);
	}
}
