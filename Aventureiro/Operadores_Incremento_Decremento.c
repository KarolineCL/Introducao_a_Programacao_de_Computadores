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

    int numero1 = 1;

    printf("Antes Incremento: %d\n", numero1);

    //numero1 = numero1 + 1 ou numero1 += 1
    numero1++;
    printf("Após Incremento: %d\n", numero1);

    //numero1 = numero1 - 1 ou numero1 -= 1
    numero1--;
    printf("Após Decremento: %d\n", numero1);



}