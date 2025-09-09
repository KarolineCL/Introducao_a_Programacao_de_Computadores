#include <stdio.h>

int main(){
    int opcao, opcao2, opcao3, saldo = 1000.00;
    float deposito, saque;
    
    printf("Escolha uma opção:\n");
    printf("1. Verificar Saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Saldo atual: R$ 1.000,00\n");
        printf("Deseja selecionar outra opção? Digite 1 para sim e 2 para não\n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
        
            printf("Escolha outra opção:\n");
            printf("2. Fazer depósito\n");
            printf("3. Fazer saque\n");
            scanf("%d", &opcao3);

            switch (opcao3)
            { 
            case 2:
                printf("Digite o valor do deposito que quer realizar:\n");
                scanf("%f", &deposito);
                printf("Depósito de R$ %.2f realizado com sucesso!\n", deposito);
                float somadeposito = saldo + deposito;
                printf("Seu saldo agora é: R$ %.2f\n", somadeposito);
                break;
    
            case 3:
                printf("Digite o valor que deseja sacar:\n");
                scanf("%f", &saque);
                printf("Saque no valor de R$ %.2f realizado com sucesso!\n", saque);
                float somasaque = saldo - saque;
                printf("Seu saldo agora é: R$ %.2f\n", somasaque);
                break;
    
            default:
                printf("Opção inválida, tente novamente!\n");
                break;
            } break;
    
        case 2:
            printf("Você saiu do sistema.\n");
            break;

        default:
            printf("Opção inválida, tente novamente!\n");
            break;
        }
        break;
    
    case 2:
        printf("Digite o valor do deposito que quer realizar:\n");
        scanf("%f", &deposito);
        printf("Depósito de R$ %.2f realizado com sucesso!\n", deposito);
        float somadeposito = saldo + deposito;
        printf("Seu saldo atualizado é: R$ %.2f\n", somadeposito);
        break;
    
    case 3:
        printf("Digite o valor que deseja sacar:\n");
        scanf("%f", &saque);
        printf("Saque no valor de R$ %.2f realizado com sucesso!\n", saque);
        float somasaque = saldo - saque;
        printf("Seu saldo atualizado é: R$ %.2f\n", somasaque);
        break;
    
    default:
        printf("Opção inválida, tente novamente!\n");
        break;
    }

    return 0;
}