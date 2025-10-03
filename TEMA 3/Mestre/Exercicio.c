#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if ((nota1 >= 0 && nota1 =< 10) && (nota2 >= 0 && nota2 =< 10))
    {
        media = (nota1 + nota2) / 2;
        printf("A média é %.2f\n", media);
    } else {
        printf("Entrada com valores de notas errado\n");
    }
    break;

  case 2:
    printf("Digite a média do estudante: ");
    scanf("%f", &media);

    if (media >= 7.00) {
        printf("Status: Aprovado\n");
    } else if (media >= 5.00){
        printf("Status: Recuperação\n");
    } else {
        printf("Status: Reprovado\n");
    }
    break;

   case 3:
      printf("Saindo...\n");
      break;
      
    default:
      printf("Opção inválida. Tente novamente.\n");

    return 0;

  }