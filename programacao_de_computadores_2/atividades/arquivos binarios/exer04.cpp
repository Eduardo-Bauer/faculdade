#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto{
	float x;
	float y;
};
typedef struct ponto PONTO;

PONTO mais_distante_ponto_medio(char *arquivo){
	float distancia = -99999, dist, n1;
	int cont=0;
	PONTO centro, distante;
	centro.x = 2.61;
	centro.y = 1.19;
	FILE *entrada = fopen(arquivo, "rb");
	if(entrada==NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&n1, sizeof(float), 2, entrada)){
		cont++;
	}
	PONTO *pontos = (PONTO*)malloc(cont*sizeof(PONTO));
	if(pontos==NULL){
		printf("ERRO\n");
		exit(0);
	}
	rewind(entrada);
	cont = 0;
	while(fread(&pontos[cont], sizeof(PONTO), 2, entrada)){
		dist = sqrt(pow(centro.x - pontos[cont].x,2) + pow(centro.y - pontos[cont].y, 2));
		if(dist > distancia){
			distante = pontos[cont];
			distancia = dist;
		}
		cont++;
	}
	fclose(entrada);
	return distante;
}

int main(){
	char arquivo[80] = "questao4.bin";
	PONTO distante = mais_distante_ponto_medio(arquivo);
	printf("%.1f %.1f\n", distante.x, distante.y);
}
