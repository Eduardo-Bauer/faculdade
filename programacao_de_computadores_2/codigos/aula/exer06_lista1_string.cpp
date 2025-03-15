//exer 06 lista string + prova
#include <stdio.h>

float str2num(char str[10]){
	int i; 
	float numero=0;
	for(i=0; str[i] != '\0'; i++){
		if(str[i]!=','){
			numero = numero * 10 + (str[i]-'0');
		}
	}
	numero = numero/100;
	return numero;
}

int main(){
	char str[10] = "13434,54";
	printf("Decimal:%.2f\n", str2num(str));
}
