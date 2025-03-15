//exer07_string_lista1]
#include<stdio.h>
#define N 10

void int2str(int n, char str[N]){
	int i=0, j; 
	char aux;
	while(n>0){
		str[i++] = (n%10) + '0';
		n /= 10;
	}
	str[i] = '\0';
	for(j=0, i=i-1; j<i; j++, i--){
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
	}
}
int main(){
	int n = 217234;
	char str[N];
	
	int2str(n, str);
	printf("%s\n", str);
}
