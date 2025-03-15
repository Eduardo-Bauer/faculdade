#include <stdio.h>

unsigned short int compactaCaracteres(char c1, char c2) {
    unsigned short int resultado = 0;
    resultado = c1;                // Atribui o primeiro caractere � vari�vel
    resultado = resultado << 8;    // Desloca a vari�vel 8 bits para a esquerda
    resultado = resultado | c2;    // Combina a vari�vel com o segundo caractere usando OR sobre bits
    return resultado;
}

int main() {
    char c1, c2;
    
    // L� dois caracteres do teclado
    printf("Digite o primeiro caractere: ");
    scanf(" %c", &c1);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &c2);
    
    // Compacta os caracteres
    unsigned short int compactado = compactaCaracteres(c1, c2);
    
    // Exibe o resultado
    printf("Valor compactado: %u\n", compactado);
    
    return 0;
}
