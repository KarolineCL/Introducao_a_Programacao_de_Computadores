#include <stdio.h>

int main(){
    int populacao1, populacao2, p_turisticos1, p_turisticos2, comparacao, atributo1, atributo2, escolhidoINT1_atrib1, escolhidoINT2_atrib1, escolhidoINT1_atrib2, escolhidoINT2_atrib2, soma_atribcarta1, soma_atribcarta2;
    float area1, area2, PIB1, PIB2, calculoDensidade1, calculoDensidade2, calculoPIB1, calculoPIB2, superPoder1, superPoder2, escolhidoFLOAT1_atrib1, escolhidoFLOAT2_atrib1, escolhidoFLOAT1_atrib2, escolhidoFLOAT2_atrib2, resultado;
    char estado1;
    char estado2[10], codigo_carta1[10], codigo_carta2[10], nome_cidade1[30], nome_cidade2[30];

    printf("Carta 1:\n");

    printf("Digite o Estado: \n"); //O usuario deve digitar uma letra de 'A' a 'H' (representando um dos oito estados)
    scanf("%c", &estado1); //Grava a letra digitada pelo usuário na variável 'estado1' 

    printf("Digite o código da carta: \n"); //O usuario deve digitar a letra do estado seguida de um número de 01 a 04
    scanf("%s", codigo_carta1); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'codigo_carta1' 

    printf("Digite o nome da cidade: \n"); //O usuario deve digitar o nome da cidade com uma cadeia (string) de caracteres
    scanf("%s", nome_cidade1); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'nome_cidade1' 

    printf("Digite a população: \n"); //O usuario deve digitar o número de habitantes da cidade com um número inteiro
    scanf("%d", &populacao1); //Grava o número inteiro digitado pelo usuário na variável 'populacao1'
    
    printf("Digite a área em km²: \n"); //O usuario deve digitar a área da cidade em quilômetros quadrados com um número de ponto flutuante no formato padrão
    scanf("%f", &area1); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'area1' 

    printf("Digite o PIB: \n"); //O usuario deve digitar o Produto Interno Bruto da cidade com um número de ponto flutuante no formato padrão
    scanf("%f", &PIB1); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'PIB1' 

    printf("Digite o número de pontos turísticos: \n"); //O usuario deve digitar a quantidade de pontos turísticos na cidade com um número inteiro
    scanf("%d", &p_turisticos1); //Grava o número inteiro digitado pelo usuário na variável 'p_turisticos1' 

    printf("Carta 2:\n");

    printf("Digite o Estado: \n"); //O usuario deve digitar uma letra de 'A' a 'H' (representando um dos oito estados)
    scanf("%s", estado2); //Grava a letra digitada pelo usuário na variável 'estado2' 

    printf("Digite o código da carta: \n"); //O usuario deve digitar a letra do estado seguida de um número de 01 a 04
    scanf("%s", codigo_carta2); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'codigo_carta2' 

    printf("Digite o nome da cidade: \n"); //O usuario deve digitar o nome da cidade com uma cadeia (string) de caracteres
    scanf("%s", nome_cidade2); //Grava um array de caracteres, ou string digitado pelo usuário na variável 'nome_cidade2' 

    printf("Digite a população: \n"); //O usuario deve digitar o número de habitantes da cidade com um número inteiro
    scanf("%d", &populacao2); //Grava o número inteiro digitado pelo usuário na variável 'populacao2'
    
    printf("Digite a área em km²: \n"); //O usuario deve digitar a área da cidade em quilômetros quadrados com um número de ponto flutuante no formato padrão
    scanf("%f", &area2); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'area2' 

    printf("Digite o PIB: \n"); //O usuario deve digitar o Produto Interno Bruto da cidade com um número de ponto flutuante no formato padrão
    scanf("%f", &PIB2); //Grava o número de ponto flutuante no formato padrão digitado pelo usuário na variável 'PIB2' 

    printf("Digite o número de pontos turísticos: \n"); //O usuario deve digitar a quantidade de pontos turísticos na cidade com um número inteiro
    scanf("%d", &p_turisticos2); //Grava o número inteiro digitado pelo usuário na variável 'p_turisticos2' 

    calculoPIB1 = (float) (PIB1 * 1000000000) / populacao1; //Calcula o PIB per Capita, dividindo a variavel PIB1 pela variavel populacao1
    calculoDensidade1 = (float) populacao1 / area1; //Calcula a dendidade populacional, dividindo a variavel populacao1 pela variavel area2
    calculoPIB2 = (float) (PIB2 * 1000000000) / populacao2; //Calcula o PIB per Capita, dividindo a variavel PIB2 pela variavel populacao2
    calculoDensidade2 = (float) populacao2/area2; //Calcula a dendidade populacional, dividindo a variavel populacao1 pela variavel area2
    superPoder1 = populacao1 + area1 + PIB1 + calculoPIB1 + ((calculoDensidade1 * (-1))) + p_turisticos1; //Calcula o super poder da carta1
    superPoder2 = populacao2 + area2 + PIB2 + calculoPIB2 + ((calculoDensidade2 * (-1))) + p_turisticos2; //Calcula o super poder da carta2

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1); //Imprime o Estado da carta 1 digitado pelo usuário com 1 letra 
    printf("Código: %s\n", codigo_carta1); //Imprime o código da carta 1 digitado pelo usuário sendo um array de caracteres, ou string
    printf("Nome da cidade: %s\n", nome_cidade1); //Imprime o nome da carta 1 digitado pelo usuário com uma cadeia (string) de caracteres
    printf("População: %d\n", populacao1); //Imprime a população da carta 1 digitada pelo usuário com um número inteiro
    printf("Área: %.2f km²\n", area1); //Imprime a área da carta 1 digitada pelo usuário em quilômetros quadrados com um número de ponto flutuante no formato padrão
    printf("PIB: %.2f bilhões de reais\n", PIB1); //Imprime o PIB da carta 1 digitado pelo usuário com um número de ponto flutuante no formato padrão
    printf("Número de Pontos Turísticos: %d\n", p_turisticos1); //Imprime o número de pontos turísticos da carta 1 digitado pelo usuário com um número inteiro
    printf("Densidade Populacional: %.2f hab/km²\n", calculoDensidade1); //Imprime o resultado do calculo da densidade populacional da carta 1
    printf("PIB per Capita: %.2f reais\n", calculoPIB1); //Imprime o resultado do calculo do PIB per Capita da carta 1
    printf("Super Poder: %.2f\n", superPoder1); //Imprime o rsultado do calculo do super poder da carta 1
    

    printf("Carta 2:\n");
    printf("Estado:%s\n", estado2); //Imprime o Estado da carta 2 digitado pelo usuário com 1 letra 
    printf("Código:%s\n", codigo_carta2); //Imprime o código da carta 2 digitado pelo usuário sendo um array de caracteres, ou string
    printf("Nome da cidade: %s\n", nome_cidade2); //Imprime o nome da carta 2 digitado pelo usuário com uma cadeia (string) de caracteres
    printf("População: %d\n", populacao2); //Imprime a população da carta 2 digitada pelo usuário com um número inteiro
    printf("Área: %.2f km²\n", area2); //Imprime a área da carta 2 digitada pelo usuário em quilômetros quadrados com um número de ponto flutuante no formato padrão
    printf("PIB: %.2f bilhões de reais\n", PIB2); //Imprime o PIB da carta 2 digitado pelo usuário com um número de ponto flutuante no formato padrão
    printf("Número de Pontos Turísticos: %d\n", p_turisticos2); //Imprime o número de pontos turísticos da carta 2 digitado pelo usuário com um número inteiro
    printf("Densidade Populacional: %.2f hab/km²\n", calculoDensidade2); //Imprime o resultado do calculo da densidade populacional da carta 2
    printf("PIB per Capita: %.2f reais\n", calculoPIB2); //Imprime o resultado do calculo do PIB per Capita da carta 2
    printf("Super Poder: %.2f\n", superPoder2); //Imprime o resultado do calculo do super poder da carta 2

    printf("***Comparação***\n");
    printf("Vcoê deve escolher 2 dos atributos abaixo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha o primeiro atributo:\n");
    scanf("%d", &atributo1); //O usuário deve digitar um numero inteiro de 1 a 5 para escolher a opção desejada
    printf("Escolha o segundo atributo:\n");
    scanf("%d", &atributo2); //O usuário deve digitar um numero inteiro de 1 a 5 para escolher a opção desejada

    if (atributo1 == atributo2)
    {
        printf ("Você escolheu os mesmos atributos!\n");
    }    
    
    switch (atributo1)
    {
    case 1:
        printf("O primeiro atributo escolhido foi: 1. População\n"); //Imprime essa mensagem caso a opção escolhida for 1
        printf("O valor da População da carta 1 é: %d\n", populacao1); //Mostra o valor da variavel população1
        printf("O valor da População da carta 2 é: %d\n", populacao2); //Mostra o valor da variavel população2
        escolhidoINT1_atrib1 = populacao1;
        escolhidoINT2_atrib1 = populacao2;
        break;
    case 2:
        printf("O primeiro atributo escolhido foi: 2. Área\n"); //Imprime essa mensagem caso a opção escolhida for 2
        printf("O valor da Área da carta 1 é: %d\n", area1); //Mostra o valor da variavel area1
        printf("O valor da Área da carta 2 é: %d\n", area1); //Mostra o valor da variavel area2
        escolhidoFLOAT1_atrib1 = area1;
        escolhidoFLOAT2_atrib1 = area2;
        break;
    case 3:
        printf("O primeiro atributo escolhido foi: 3. PIB\n"); //Imprime essa mensagem caso a opção escolhida for 3
        printf("O valor do PIB da carta 1 é: %d\n", PIB1); //Mostra o valor da variavel PIB1
        printf("O valor do PIB da carta 2 é: %d\n", PIB2); //Mostra o valor da variavel PIB2
        escolhidoFLOAT1_atrib1 = PIB1;
        escolhidoFLOAT2_atrib1 = PIB2;
        break;
    case 4:
        printf("O primeiro atributo escolhido foi: 4. Numero de pontos turisticos\n"); //Imprime essa mensagem caso a opção escolhida for 4
        printf("A quantidade de pontos turisticos da carta 1 é: %d\n", p_turisticos1); //Mostra o valor da variavel p_turisticos1
        printf("A quantidade de pontos turisticos da carta 2 é: %d\n", p_turisticos2); //Mostra o valor da variavel p_turisticos2
        escolhidoINT1_atrib1 = p_turisticos1;
        escolhidoINT2_atrib1 = p_turisticos2;
        break;
    case 5:
        printf("O primeiro atributo escolhido foi: 5. Densidade demográfica\n"); //Imprime essa mensagem caso a opção escolhida for 5
        printf("O valor da Densidade demográfica da carta 1 é: %d\n", calculoDensidade1); //Mostra o valor da variavel calculoDensidade1
        printf("O valor da Densidade demográfica da carta 2 é: %d\n", calculoDensidade2); //Mostra o valor da variavel calculoDensidade2
        escolhidoFLOAT1_atrib1 = calculoDensidade1;
        escolhidoFLOAT2_atrib1 = calculoDensidade2;
        break;

    default:
        printf("Opção inválida, começe novamente!\n"); //Imprime essa mensagem caso o numero digitado nao for algum entre 1 e 5
        break;
    }

    switch (atributo2)
    {
    case 1:
        printf("O segundo atributo escolhido foi: 1. População\n"); //Imprime essa mensagem caso a opção escolhida for 1
        printf("O valor da População da carta 1 é: %d\n", populacao1); //Mostra o valor da variavel população1
        printf("O valor da População da carta 2 é: %d\n", populacao2); //Mostra o valor da variavel população2
        escolhidoINT1_atrib2 = populacao1;
        escolhidoINT2_atrib2 = populacao2;
        break;
    case 2:
        printf("O segundo atributo escolhido foi: 2. Área\n"); //Imprime essa mensagem caso a opção escolhida for 2
        printf("O valor da Área da carta 1 é: %d\n", area1); //Mostra o valor da variavel area1
        printf("O valor da Área da carta 2 é: %d\n", area1); //Mostra o valor da variavel area2
        escolhidoFLOAT1_atrib2 = area1;
        escolhidoFLOAT2_atrib2 = area2;
        break;
    case 3:
        printf("O segundo atributo escolhido foi: 3. PIB\n"); //Imprime essa mensagem caso a opção escolhida for 3
        printf("O valor do PIB da carta 1 é: %d\n", PIB1); //Mostra o valor da variavel PIB1
        printf("O valor do PIB da carta 2 é: %d\n", PIB2); //Mostra o valor da variavel PIB2
        escolhidoFLOAT1_atrib2 = PIB1;
        escolhidoFLOAT2_atrib2 = PIB2;
        break;
    case 4:
        printf("O segundo atributo escolhido foi: 4. Numero de pontos turisticos\n"); //Imprime essa mensagem caso a opção escolhida for 4
        printf("A quantidade de pontos turisticos da carta 1 é: %d\n", p_turisticos1); //Mostra o valor da variavel p_turisticos1
        printf("A quantidade de pontos turisticos da carta 2 é: %d\n", p_turisticos2); //Mostra o valor da variavel p_turisticos2
        escolhidoINT1_atrib2 = p_turisticos1;
        escolhidoINT2_atrib2 = p_turisticos2;
        break;
    case 5:
        printf("O segundo atributo escolhido foi: 5. Densidade demográfica\n"); //Imprime essa mensagem caso a opção escolhida for 5
        printf("O valor da Densidade demográfica da carta 1 é: %d\n", calculoDensidade1); //Mostra o valor da variavel calculoDensidade1
        printf("O valor da Densidade demográfica da carta 2 é: %d\n", calculoDensidade2); //Mostra o valor da variavel calculoDensidade2
        escolhidoFLOAT1_atrib2 = calculoDensidade1;
        escolhidoFLOAT2_atrib2 = calculoDensidade2;
        break;
    default:
        printf("Opção inválida, começe novamente!\n"); //Imprime essa mensagem caso o numero digitado nao for algum entre 1 e 5
        break;
    }

    soma_atribcarta1 = (escolhidoINT1_atrib1 + escolhidoINT1_atrib2);
    soma_atribcarta2 = (escolhidoINT2_atrib1 + escolhidoINT2_atrib2);

    printf("A soma dos atributos da carta 1 (%s) é: %.2f\n", nome_cidade1, soma_atribcarta1);
    printf("A soma dos atributos da carta 2 (%s) é: %.2f\n", nome_cidade2, soma_atribcarta2);

    resultado = soma_atribcarta1 > soma_atribcarta2 ? 1 : 0;

    if (resultado = 1)
    {
        printf("A carta 1 (%s) venceu!\n", nome_cidade1);
    } else{
        printf("A carta 2 (%s) venceu!\n", nome_cidade2);
    }
    
        return 0;

}