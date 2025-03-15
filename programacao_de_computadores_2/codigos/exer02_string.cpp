#include<stdio.h>
#define N 100

int main(){
	char str1[N], str2[N];
	int i, j;
	
	printf("digite o string:\n");
	//scanf("%s", str1); nao le com espaço
	gets(str1); //le com espaço
	for(i=0, j=0; str1[i] != '\0'; i++){
		str2[j++] = str1[i];
		str2[j++] = str1[i];
	}
	str2[j] = '\0';
	printf("%s\n", str2);
}
