//string é um vetor de caracteres.

//em c elas são vetores de caracteres.

//char = %c

//string = %s

//"..." um velor de caracteres

//'.' um caractere

#include<stdio.h>
#define n 100
int main(){
	char str[n] = "programacao de computadores II";
	//str[11] = '\0';
	//printf("%s\n", str);
	//printf("%c\n", str[15]);
	
	//escrevendo com um for:
	int i;
	for(i=0;str[i]!='\0';i++){
		printf("%c", str[i]);
	}
}
