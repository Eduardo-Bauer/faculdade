// algoritmo "I010_I00001900"
// Autor : Alexandre Krohn
// Data : 01/11/2023
#include <stdio.h>


int eh_primo(int numero) {

  int i, divisores, primo;
         
  divisores = 0;
  primo = 0;
  for(i=1;i<=numero;i++) {
           if(numero%i==0) {
                    divisores++;
           }
  }
  if(divisores == 2) {
           primo = 1;
  }
  return primo;
}

int fatorial(int numero) {
         
         int i, fat;

         fat = 1;

         for(i=1;i<=numero;i++){
                  fat = fat * i;
         }

         return fat;
}


void main()
{

  int n;

  printf("Informe o número:\n");
  scanf("%d", &n);
  if(eh_primo(n)==1) {
           printf("%d é primo\n", n);

     // se número menor que 10, mostre seu fatorial
     if(n<10) {
              printf("%d é o fatorial de %d\n", fatorial(n), n);
     }
           
  } else {
           printf("%d NÃO é primo\n", n);
  }


  
   

}
