#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *f = NULL;
  
  f = fopen("questao1.bin", "rb" );//abrindo o arquivo
  
  if(f == NULL){
  	printf("ERRO AO ABRIR O AQUIVO\n");
  	exit(0);
  }
  
  float n, soma=0, media;
  int cont=0;
  while(fread(&n, sizeof(float), 1, f)){//ler ate ele nao consiga mais
  	soma += n;
  	cont++;
  }
  
  media = soma/cont;
  printf("Media: %f\n", media);
  
  rewind(f);//esta colocando o indice do arquivo para o inicio
  //fseek(f, 0, SEEK_SET);//esta colocando o indice do arquivo para o inicio
  //fseek(f, -4, SEEK_END);//esta colocando o indice do arquivo para o final e voltando 4 bits
  //fseek(f, -4, SEEK_CUR);//voltando 4 bits em relacao a corrente
  
  FILE *o = fopen("lixo.txt", "w");
  
  if(o == NULL){
  	printf("ERRO AO ABRIR O ARQUIVO\n");
  	exit(0);
  }
  
  while(fread(&n, sizeof(float), 1, f)){
  	if(n >= media){
  		fprintf(o, "%f\n", n);//esta escrevendo em o o arquivo em estilo float do n
  		//fwrite(&n, sizeof(float), 1, o);//escrevendo o valor de n, com o tamanho sizeof, de 1 valor, no o
	}
  }
  
  
  fclose(f);//fechando o arquivo
  fclose(o);
}
