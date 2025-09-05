#include <stdio.h>

int main(){
    int numero = 10, teste = 10;

                            // % diz se o sobra algo apos a virgula depois da divisao. Sim = 1, não = 0
    printf("teste %d\n", teste % 2);

    if (numero % 2 == 0){
        printf("O numero é par\n");
    } else {
        printf("O número é impar\n");
    }

    //outra forma de utilizar
    int numero2 = 5, resultado;

    resultado = numero2 % 2;

    printf("A variavel resultado é: %d\n", resultado);

    if (resultado == 0){
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

}