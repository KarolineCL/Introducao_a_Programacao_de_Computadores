#include <stdio.h>

int main () {
    //mover a torre 5 casas para a direita

    printf("Movimentos da torre:\n");

    for (int torre = 0; torre < 5; torre++){
        printf("Direita\n"); //imprime a direção do movimento
    }

    //mover o bispo 5 casas para a diagonal cima direita

    printf("Movimentos do bispo:\n");

    int bispo = 0;

    while (bispo < 5){
        printf("Cima Direita\n"); //imprime a direção do movimento

        bispo++;
    }

    //mover a torre 5 casas para a esquerda

    printf("Movimentos da rainha:\n");

    int rainha = 0;

    do
    { printf("Esquerda\n"); //imprime a direção do movimento
        rainha++;
    
    } while (rainha < 8);


    return 0;
}