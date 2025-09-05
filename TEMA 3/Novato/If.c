#include <stdio.h>

int main(){
    int laranja = 11, maca = 10;

    if (laranja != maca)
    {
        printf("Não tem a mesma quantidade de laranjas e maças\n");
    }

    if (laranja > maca)
    {
        printf("Tem mais laranjas do que maças\n");
    }

    if (laranja < maca)
    {
        printf("Tem menos laranjas do que maças\n");
    }

    if (laranja == maca)
    {
        printf("Tem a mesma quantidade de laranjas e maças\n");
    }
    
    return 0;

}