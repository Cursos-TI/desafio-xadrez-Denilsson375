#include <stdio.h>

int main(){
    int torre = 0;
    int bispo = 0;
    int rainha = 0;

// Movimentação da Torre.
printf("\nMovimento da Torre\n");

    for(int bispo = 0; torre < 5; torre++) {
        printf("Direita\n");
    }

// Movimentação da Torre.
printf("\nMovimento do Bispo\n");

    while (bispo < 5 ) {
        printf("Cima, Direita\n");
         bispo++;
    }
    
// Movimentação da Rainha
printf("\nMovimento da Rainha\n");

    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    return 0;

}