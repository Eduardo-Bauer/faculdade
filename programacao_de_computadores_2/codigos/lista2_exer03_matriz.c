/*Uma matriz � dita Diagonalmente Dominante se em todas as linhas o elemento da diagonal principal � maior ou igual � soma dos outros elementos da linha,
e h� pelo menos uma linha em que o elemento da diagonal principal � MAIOR que a soma dos outros elementos da linha (n�o basta que seja igual). 
Fa�a um programa que leia uma matriz M[4][4] e verifique se � diagonalmente dominante escrevendo: 
1 - Se � diagonalmente dominante; 0 - Se n�o � diagonalmente dominante*/

#include<stdio.h>
#include<stdlib.h>
#define n 5
int main(){
	int mat[n][n], i, j, total, numeros[n], valor, soma[6], resto, numero;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat[i][j] = rand()%10;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("% d", mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		valor = 10000;
		total = 0;
		for(j=0;j<n;j++){
			total += mat[i][j] * valor;
			valor = valor/10;
		}
		numeros[i] = total;
	}
	total = 0;
	for(i=0;i<n;i++){
		total += numeros[i];
	}
	valor = 100000;
	for(i=0;i<6;i++){
		numero = total/valor;
		resto = total%valor;
		soma[i] = numero;
		valor = valor/10;
		total = resto;
	}
	printf("Total da soma dos numeros:\n");
	for(i=0;i<6;i++){
		printf("%d ", soma[i]);
	}
}
