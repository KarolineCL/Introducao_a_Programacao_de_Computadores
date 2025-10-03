#include <stdio.h>

int main(){
    int num1 = 40, num2 = 60, maior;
    char* resultado;

    num1 > num2 ? printf("O numero maior é: %d\n", num1) : printf("O numero maior é: %d\n", num2);

    //Outra forma:

    num1 > num2 ? (maior = num1) : (maior = num2);

    if (num1 > num2)
    {
        printf("O numero maior é: %d\n", num1);
    } else {
        printf("O numero maior é: %d\n", num2);
    }

    //Outra forma:

    resultado = (num1 > num2) ? "Maior numero é o num1" : "Maior numero é o num2";

    printf("Resultado: %s\n", resultado);

    //Outra forma:

    maior = (num1 > num2) ? num1 : num2;

    printf("O maior numero é: %d\n", maior);
    
    return 0;

}
