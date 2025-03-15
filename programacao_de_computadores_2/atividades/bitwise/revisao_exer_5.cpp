#include <stdio.h>

void imprimeASCII(unsigned char caractere[8]){
	int i, j;
	for(i=0;i<8;i++){
		for(j=7;j>=0;j--){
			if(caractere[i]>>j & 1){
				printf("#");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main(){
	int i, j;
	unsigned char caractere[8] = { 0xe7, 0xe7, 0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xff};
	imprimeASCII(caractere);
}
