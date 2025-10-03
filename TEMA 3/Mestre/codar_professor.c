#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Numero entre 1 e 100

    //Inicio do Jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um numero e o pito de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:\n");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100)\n");
    scanf("%d", &numeroJogador);
  
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo inválida!");
        break;
    }

    //Exibir numero do computador
    printf("O número do computador é: %d e o numero do Jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Parabéns você venceu!\n");
    } else {
        printf("Infelizmente, você perdeu\n");
    }
    
    return 0;
}