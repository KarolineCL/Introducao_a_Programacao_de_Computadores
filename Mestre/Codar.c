#include <stdio.h>

int main (){
    //Declarar variáveos Produto, u i estoque, double valor unitario
    //u i quantidade mínima
    char produto_A[30] = "Produto A";
    char produto_B[30] = "Produto B";

    unsigned int estoque_A = 1000;
    unsigned int estoque_B = 2000;

    float valor_A = 10.50;
    float valor_B = 20.40;

    unsigned int estoque_minimo_A = 500;
    unsigned int estoque_minimo_B = 1000;

    double valor_total_A;
    double valor_total_B;

    int resultado_A, resultado_B;

    //Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produto_A, estoque_A, valor_A);
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produto_B, estoque_B, valor_B);

    //Comparação com o valor mínimo de estoque
    resultado_A = estoque_A > estoque_minimo_A;
    resultado_B = estoque_B > estoque_minimo_B;

    printf("O produto %s tem estoque mínimo? %d\n", produto_A, resultado_A);
    printf("O produto %s tem estoque mínimo? %d\n", produto_B, resultado_B);

    //Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f)? %d\n", estoque_A * valor_A, estoque_B * valor_B, (estoque_A * valor_A) > (estoque_B * valor_B));

    return 0;

}