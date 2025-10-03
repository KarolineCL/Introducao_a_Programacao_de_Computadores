#include <stdio.h>

int main () {

    int i = 0;

    while (i <= 10){
        //while que só imprima numeros pares
        if(i % 2 == 0)
        {
            printf("O numero %d é par!\n", i);
        }

        i++;

    }

    /*while que só imprima numeros impares
    
    while (i <= 10){
       
        if(i % 2 != 0)
        {
            printf("O numero %d é impar!\n", i);
        }

        i++;

    }*/

    return 0;
}