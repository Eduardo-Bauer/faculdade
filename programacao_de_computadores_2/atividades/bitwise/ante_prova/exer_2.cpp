#include <stdio.h>

unsigned int compacta(unsigned int h, unsigned m, unsigned int s){
	unsigned int compacta;
	compacta = h;
	compacta = compacta<<8;
	compacta = compacta | m;
	compacta = compacta<<8;
	compacta = compacta | s;
	return compacta;
}

void descompacta(unsigned int c, unsigned int *h, unsigned int *m, unsigned int *s){
	*s = c & 0xff;
	*m = (c>>8) & 0xff;
	*h = (c>>16) & 0xff;
}

int main(){
	unsigned int h, m, s;
	unsigned c = 0xe2019;
	printf("digite a hora\n");
	scanf("%u %u %u", &h, &m, &s);
	printf("%x\n", compacta(h, m, s));
	descompacta(c, &h, &m, &s);
	printf("%02u/%02u/%02u", h, m, s);
}
