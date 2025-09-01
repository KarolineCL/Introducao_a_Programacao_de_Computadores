#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int x = 5;
    int num = 10;

    float y = 5.0;
    float resultado = 10.0;

    int comparacao = (float)num == resultado;

    char c = 'a'; //O valor de c na tabela ASCII é 97

//Comparação simples:
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

//Comparação com tipos de variaveis diferentes coversao implicita
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

//Comparação com tipos de variaveis diferentes coversao explicita
    printf("num == resultado: %d\n", comparacao);

//Comparação implicita com char
    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d \n", c, c); //Note que foi usado o %c para imprimir a letra e %d para imprimir o valor de c na tabela ASCII

    return 0;
}