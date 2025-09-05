#include <stdio.h>

int main(){
    /*
    Vamos criar um programa que verifica se uma pessoa é qualificada para benefícios sociais com base em vários critérios: idade, renda e número de dependentes.
    A pessoa tem que ter entre 18 e 65 anos, a renda tem que ser menos de 3000 reais e ter mais do que 2 dependentes
    */
   int idade, dependentes;
   float renda;

   printf("Digite a sua idade:\n");
   scanf("%d", &idade);
   printf("Digite a sua renda:\n");
   scanf("%f", &renda);
   printf("Digite a qnt de dependentes:\n");
   scanf("%d", &dependentes);

   if (idade >= 18 && idade <= 65){
    if (renda < 3000){
        if (dependentes > 2){
            printf("Você esta qualificado para receber os beneficios sociais!\n");
        } else {
            printf("Você nao esta qualificado devido a qnt de dependentes!\n");
        }
    } else {
        printf("Voce não esta qualificado devido a sua renda!\n");
    }
   } else {
    printf("Você não esta qualificado devido a sua idade!\n");
   }
   return 0;
}