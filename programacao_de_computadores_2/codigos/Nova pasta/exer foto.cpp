#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
/*-----------------------------------------*/
struct cabecalho{
	unsigned short int tipo;
	unsigned int tamanho;
	unsigned short int reservado1;
	unsigned short int reservado2;
	unsigned int offset;
	unsigned int header;
	unsigned int largura;
	unsigned int altura;
	unsigned short int planos;
	unsigned short int bits;
	unsigned int comp;
	unsigned int imagem;
	unsigned int xres;
	unsigned int yres;
	unsigned int crused;
	unsigned int crsig;
};
typedef struct cabecalho CABECALHO;

struct pixel{
	unsigned char b, g, r;
};
typedef struct pixel PIXEL;
/*-----------------------------------------*/
int main(){
	CABECALHO c;
	char entrada[50] = "borboleta.bmp", saida[50] = "saida.bmp";
	FILE *in = fopen(entrada, "rb");
	if(in==NULL){
		printf("ERRO\n");
		exit(0);
	}
	FILE *out = fopen(saida, "wb");
	if(out==NULL){
		printf("ERRO\n");
		exit(0);
	}
	fread(&c, sizeof(CABECALHO), 1, in);
	fwrite(&c, sizeof(CABECALHO), 1, out);
	
	int i,j;
	unsigned char m;
	PIXEL p;
	for(i=0;i<c.altura;i++){
		for(j=0;j<c.largura;j++){
			fread(&p, sizeof(PIXEL), 1, in);
			m = (p.b + p.g + p.r)/3;
			p.b = m;
			p.g = m;
			p.r = m;
			fwrite(&p, sizeof(PIXEL), 1, out);
		}
	}
	
	fclose(in);
	fclose(out);
}
