#include<stdio.h>
//#include<stdlib.h> para windows
//#include<stdio.ext.h> para linux
#define N 100
int main(){
	int n, i;
	char str[N], c, lixo;
	
	printf("digite o numero de vezes:\n");
	scanf("%d", &n);
	
	lixo = getchar(); //gambiarra braba - getchar é para ler um caracter
	
	//fflush(stdin); //limpar a entrada para o caracter desejado, funciona no windows
	
	//__fpurge(stdin); - para linux
	
	printf("digite o caracter:\n");
	scanf("%c", &c);
	
	for(i=0;i<n;i++){
		str[i] = c;
	}
	str[i] = '\0';
	
	printf("%s \n", str);
}
