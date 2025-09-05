#include <stdio.h>

int main (){
    int numeronormal = 2147483647; //Valor máximo de int
    long int numerogrande = 9223372036854775807; 
    long long int numerograndeatualizado = 9223372036854775807;

    printf("Numero regular (int): %d\n", numeronormal);
    printf("Número grande (long int): %ld\n", numerogrande);
    printf("Numero grande atualizado (long long int): %lld\n", numerograndeatualizado);

    return 0;
}