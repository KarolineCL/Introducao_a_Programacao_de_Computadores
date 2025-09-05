#include <stdio.h>

int main(){
    int populacao1, populacao2, p_turisticos1, p_turisticos2;
    float area1, area2, PIB1, PIB2;
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10], nome_cidade1[30], nome_cidade2[30];

    printf("Carta 1:\n");

    printf("Digite o Estado: \n"); //O usuario deve digitar uma letra de 'A' a 'H' (representando um dos oito estados)
    scanf("%c", &estado1); //Grava a letra digitada pelo usuário na variável 'estado1' 

    printf("Digite o código da carta: \n"); //O usuario deve digitar a letra do estado seguida de um número de 01 a 04
    scanf("%s", codigo_carta1); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'codigo_carta' 

    printf("Digite o nome da cidade: \n"); //O usuario deve digitar o nome da cidade com uma cadeia (string) de caracteres
    scanf("%s", nome_cidade1); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'nome_cidade' 

    printf("Digite a população: \n"); //O usuario deve digitar o número de habitantes da cidade com um número inteiro
    scanf("%d", &populacao1); //Grava o número inteiro digitado pelo usuário na variável 'populacao'
    
    printf("Digite a área em km²: \n"); //O usuario deve digitar a área da cidade em quilômetros quadrados com um número de ponto flutuante no formato padrão
    scanf("%f", &area1); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'area' 

    printf("Digite o PIB: \n"); //O usuario deve digitar o Produto Interno Bruto da cidade com um número de ponto flutuante no formato padrão
    scanf("%f", &PIB1); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'PIB' 

    printf("Digite o número de pontos turísticos: \n"); //O usuario deve digitar a quantidade de pontos turísticos na cidade com um número inteiro
    scanf("%d", &p_turisticos1); //Grava o número inteiro digitado pelo usuário na variável 'p_turisticos' 

    printf("Carta 2:\n");

    printf("Digite o Estado: \n"); //O usuario deve digitar uma letra de 'A' a 'H' (representando um dos oito estados)
    scanf("% c", &estado2); //Grava a letra digitada pelo usuário na variável 'estado1' 

    printf("Digite o código da carta: \n"); //O usuario deve digitar a letra do estado seguida de um número de 01 a 04
    scanf("%s", codigo_carta2); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'codigo_carta' 

    printf("Digite o nome da cidade: \n"); //O usuario deve digitar o nome da cidade com uma cadeia (string) de caracteres
    scanf("%s", nome_cidade2); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'nome_cidade' 

    printf("Digite a população: \n"); //O usuario deve digitar o número de habitantes da cidade com um número inteiro
    scanf("%d", &populacao2); //Grava o número inteiro digitado pelo usuário na variável 'populacao'
    
    printf("Digite a área em km²: \n"); //O usuario deve digitar a área da cidade em quilômetros quadrados com um número de ponto flutuante no formato padrão
    scanf("%f", &area2); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'area' 

    printf("Digite o PIB: \n"); //O usuario deve digitar o Produto Interno Bruto da cidade com um número de ponto flutuante no formato padrão
    scanf("%f", &PIB2); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'PIB' 

    printf("Digite o número de pontos turísticos: \n"); //O usuario deve digitar a quantidade de pontos turísticos na cidade com um número inteiro
    scanf("%d", &p_turisticos2); //Grava o número inteiro digitado pelo usuário na variável 'p_turisticos' 

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1); //Imprime o Estado da carta digitado pelo usuário com 1 letra 
    printf("Código: %s\n", codigo_carta1); //Imprime o código da carta digitado pelo usuário sendo um array de caracteres, ou string
    printf("Nome da cidade: %s\n", nome_cidade1); //Imprime o nome da cidade digitado pelo usuário com uma cadeia (string) de caracteres
    printf("População: %d\n", populacao1); //Imprime a população da cidade digitada pelo usuário com um número inteiro
    printf("Área: %.2f km²\n", area1); //Imprime a área da cidade digitada pelo usuário em quilômetros quadrados com um número de ponto flutuante no formato padrão
    printf("PIB: %.2f bilhões de reais\n", PIB1); //Imprime o PIB da cidade digitado pelo usuário com um número de ponto flutuante no formato padrão
    printf("Número de Pontos Turísticos: %d\n", p_turisticos1); //Imprime o número de pontos turísticos da cidade digitado pelo usuário com um número inteiro
    

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2); //Imprime o Estado da carta digitado pelo usuário com 1 letra 
    printf("Código: %s\n", codigo_carta2); //Imprime o código da carta digitado pelo usuário sendo um array de caracteres, ou string
    printf("Nome da cidade: %s\n", nome_cidade2); //Imprime o nome da cidade digitado pelo usuário com uma cadeia (string) de caracteres
    printf("População: %d\n", populacao2); //Imprime a população da cidade digitada pelo usuário com um número inteiro
    printf("Área: %.2f km²\n", area2); //Imprime a área da cidade digitada pelo usuário em quilômetros quadrados com um número de ponto flutuante no formato padrão
    printf("PIB: %.2f bilhões de reais\n", PIB2); //Imprime o PIB da cidade digitado pelo usuário com um número de ponto flutuante no formato padrão
    printf("Número de Pontos Turísticos: %d\n", p_turisticos2); //Imprime o número de pontos turísticos da cidade digitado pelo usuário com um número inteiro


    return 0;

}