#include <stdio.h>

int main(){
    int idade = 20;
    float altura = 1.75, temperatura = 25.0, umidade = 55.0;

    if(idade >= 18 && idade <= 30 && altura > 1.70){
        printf("Você esta na faixa etaria e tem a altura adequada\n");
    } else {
        printf("Você não atende aos critérios\n");
    }

    if(temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50){
        printf("As condições estao favoraveis\n");
    } else {
        printf("As condições não estao favoraveis\n");
    }

    return 0;
}