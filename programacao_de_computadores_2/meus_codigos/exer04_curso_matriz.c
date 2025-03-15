#include<stdio.h>
#include<stdlib.h>
#define n 5
void le_matriz(int mat[n][n]){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = rand()%10;
        }
    }
}
void escreve_matriz(int mat[n][n]){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("% d", mat[i][j]);
        }
        printf("\n");
    }
}
void troca_matriz(int mat[n][n]){
    int i = 0, j, aux;
    for(j=0;j<n;j++){
        aux = mat[i][j];
        mat[i][j] = mat[i+2][j];
        mat[i+2][j] = aux;
    }
}
int main(){
    int mat[n][n];
    le_matriz(mat);
    escreve_matriz(mat);
    troca_matriz(mat);
    printf("\n");
    escreve_matriz(mat);
}