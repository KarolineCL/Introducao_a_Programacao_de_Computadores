#include <stdio.h>

int main(){
    int temperatura = 20, resultado;

    temperatura >= 30 ? printf("Esta calor!\n") : printf("Está frio!\n");

    //Outra forma:

    resultado = temperatura > 30 ? 1 : 0;

    if (resultado == 1){
        printf("Esta calor!\n");
    } else {
        printf("Está frio!\n");
    }
    
    return 0;


}