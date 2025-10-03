#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhajogador, escolhacomputador;
    char opcao;

    printf("*** Bem-vindo ao jogo: MAIOR, MENOR ou IGUAL! ***\n");
    printf("Escolha uma das opções abaixo para competir contra o computador:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    scanf("%s", &opcao);
    printf("Escolha um numero de 1 a 100\n");
    scanf("%d", &escolhajogador);

    (escolhajogador >= 1 && escolhajogador <= 100) ? printf("O numero escolhido pelo jogador foi: %d\n", escolhajogador) : printf("O numero escolhido é inválido, começe o jogo novamente\n");

    srand(time(0));

    escolhacomputador = rand() % 100 + 1;

    printf("O numero escolhido pelo computador foi: %d\n", escolhacomputador);

    switch (opcao)
    {
    case 'M':
    case 'm':
        if ((escolhajogador > escolhacomputador))
        {
            printf("Você ACERTOU! O numero do jogador é MAIOR do que o numero do computador!\n");
        } else {            
            printf("Você ERROU! O numero do jogador NÃO é MAIOR do que o numero do computador!\n");
        }
        break;
    
    case 'N':
    case 'n':
        if ((escolhajogador < escolhacomputador))
        {
            printf("Você ACERTOU! O numero do jogador é MENOR do que o numero do computador!\n");
        } else {
            printf("Você ERROU! O numero do jogador NÃO é MENOR do que o numero do computador!\n");
        }
        break;
    
    case 'I':
    case 'i':
        if ((escolhajogador == escolhacomputador))
        {
            printf("Você ACERTOU! O numero do jogador é IGUAL ao que o numero do computador!\n");
        } else {
            printf("Você ERROU! O numero do jogador NÃO é IGUAL ao que o numero do computador!\n");
        }
        break;
    
    default: printf("A opção digitada é inválida, começe o jogo novamente\n");
        break;
    }

    return 0;


}