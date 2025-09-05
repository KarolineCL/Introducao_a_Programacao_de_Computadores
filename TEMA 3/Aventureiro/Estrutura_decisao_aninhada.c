#include <stdio.h>

int main(){
    int idade;
    float renda;
    

    /*Programa que verifica se uma pessoa esta qualificada para um desconto especial cm base na idade e na renda mensal. 
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000.
    */

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua renda:\n");
    scanf("%f", &renda);

    if (idade < 18 || idade > 60){
        if (renda < 2000){
            printf("Voce esta qualificado para o desconto especial!\n");
        } else{
            printf("Você não esta qualificado devido a sua renda.\n");
        }
    } else {
        printf("Você nao esta qualificado devido a sua idade.\n");
    }
    return 0;
}