#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pre-incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes Incremento: %d\n", numero1);

    //numero1 = numero1 + 1 ou numero1 += 1
    //pos-incremento: resultado + numero1 ou numero1++
    resultado = numero1++;
    printf("Após Pós-Incremento, Numero1: %d - Resultado: %d\n", numero1, resultado);

    //pre-incremento: resultado + numero1 ou ++numero1
    resultado = ++numero1;
    printf("Após Pré-Incremento, Numero1: %d - Resultado: %d\n", numero1, resultado);

    //numero1 = numero1 - 1 ou numero1 -= 1
    //pos-decremento: resultado - numero1 ou numero1--
    resultado = numero1--;
    printf("Após Pós-Decremento, Numero1: %d - Resultado: %d\n", numero1, resultado);

    //pre-decremento: resultado - numero1 ou --numero1
    resultado = --numero1;
    printf("Após Pré-Decremento, Numero1: %d - Resultado: %d\n", numero1, resultado);


}