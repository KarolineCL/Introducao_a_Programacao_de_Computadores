#include <stdio.h>

int main(){
    float matematica, portugues, historia, geografia, edfisica, ingles, fisica, quimica, artes, media;

    printf("Digite suas notas em cada uma das matérias abaixo:\n");

    printf("Matemática:");
    scanf("%f", &matematica);
    printf("Português:");
    scanf("%f", &portugues);
    printf("História:");
    scanf("%f", &historia);
    printf("Geografia:");
    scanf("%f", &geografia);
    printf("Ed. Física:");
    scanf("%f", &edfisica);
    printf("Inglês:");
    scanf("%f", &ingles);
    printf("Física:");
    scanf("%f", &fisica);
    printf("Química:");
    scanf("%f", &quimica);
    printf("Artes:");
    scanf("%f", &artes);

    media = (matematica + portugues + historia + geografia + edfisica + ingles + fisica + quimica + artes) / 9;

    printf("Sua média é: %.2f\n", media);

    if (media >= 6.00){
        printf("Parabéns, você passou de ano!\n");
    } else {
        printf("Infelizmente você não passou de ano!\n");
    }
}