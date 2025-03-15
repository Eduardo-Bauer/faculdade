#include <stdio.h>

// Função para compactar dois caracteres em um unsigned short int
unsigned short int compactaCaracteres(char c1, char c2) {
    unsigned short int resultado = 0;
    resultado = c1;                // Atribui o primeiro caractere à variável
    resultado = resultado << 8;    // Desloca a variável 8 bits para a esquerda
    resultado = resultado | c2;    // Combina a variável com o segundo caractere usando OR sobre bits
    return resultado;
}

// Função para descompactar dois caracteres de um unsigned short int
void descompactaCaracteres(unsigned short int compactado, char *c1, char *c2) {
    *c1 = (char)(compactado >> 8);   // Desloca 8 bits para a direita e armazena o primeiro caractere
    *c2 = (char)(compactado & 0xFF); // Aplica a máscara 0xFF e armazena o segundo caractere
}

int main() {
    char c1, c2;
    
    // Lê dois caracteres do teclado
    printf("Digite o primeiro caractere: ");
    scanf(" %c", &c1);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &c2);
    
    // Compacta os caracteres
    unsigned short int compactado = compactaCaracteres(c1, c2);
    
    // Exibe o valor compactado
    printf("Valor compactado: %u\n", compactado);
    
    // Variáveis para armazenar os caracteres descompactados
    char dc1, dc2;
    
    // Descompacta os caracteres
    descompactaCaracteres(compactado, &dc1, &dc2);
    
    // Exibe os caracteres descompactados
    printf("Caracter descompactado 1: %c\n", dc1);
    printf("Caracter descompactado 2: %c\n", dc2);
    
    return 0;
}
