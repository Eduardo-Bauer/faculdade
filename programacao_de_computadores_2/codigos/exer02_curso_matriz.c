//Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da diagonal secundária.

#include<stdio.h>
#define n 5
#include<stdlib.h>
void le_matriz(int mat[n][n]){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = rand()%10;
        }
    }
}
void escreve_matriz(int mat[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("% d", mat[i][j]);
        }
        printf("\n");
    }
}
int soma_matriz(int mat[n][n]){
    int i, soma = 0;
    for(i=n-1;i>0;i--){
        soma += mat[i][i];
    }
    return soma;
}
int main(){
    int mat[n][n];
    le_matriz(mat);
    escreve_matriz(mat);
    soma_matriz(mat);
    int soma = soma_matriz(mat);
    printf("A soma e: %d", soma);
}
