#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        srand(time(0));
        numeroSecreto = rand() % 10 + 1;
        printf("Adivinhe o numero (entre 1 e 10):\n");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto){
            printf("Parabéns voce acertou!\n");
        } else {
            printf("Você errou. o numero era: %d.\n", numeroSecreto);
        }
        break;
    
    case 2:
        printf("Regras do jogo:\n");
        printf("Regras 1 ......\n");
        printf("Regras 2 ......\n");
        printf("Regras 3 ......\n");
        break;
    
    case 3:
        printf("Saindo...\n");
        break;
    
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    return 0;
}