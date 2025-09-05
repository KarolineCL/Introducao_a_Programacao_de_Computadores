#include <stdio.h>

int main(){
    unsigned int estoque, estoqueminimo = 500;
    float umidade, temperatura;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade:\n", umidade);
    scanf("%f", &umidade);
    printf("Entre com o estoque:\n", estoque);
    scanf("%d", &estoque);

    if (temperatura >= 30)
    {
        printf("A temperatura esta elevada!\n");
    } else {
        printf("A temperatura esta dentro dos parâmetros!\n");
    }

    if (umidade >= 50)
    {
        printf("A umidade esta elevada!\n");
    } else {
        printf("A umidade esta dentro dos parametros!\n");
    }

    if (estoque < estoqueminimo)
    {
        printf("O estoque esta abaixo do minimo esperado!\n");
    } else {
        printf("O estoque esta dentro do esperado!\n");
    }
    
    return 0;

}