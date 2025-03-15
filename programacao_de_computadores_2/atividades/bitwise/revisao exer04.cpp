#include <stdio.h>

/*--------------------------------------------------------------------*/
unsigned char rodaParaEsquerda(unsigned char n, unsigned char nbits){
    unsigned char res = 0;

    res =  n >> (7-nbits);
    res |= n << nbits;
   

}
/*--------------------------------------------------------------------*/
int main(){
    unsigned char n = 0x4d;
    unsigned char nbits = 3;
    unsigned char res = rodaParaEsquerda(n, nbits);

    printf("%x\n", n);    

    printf("%d\n", res);    
        
}
