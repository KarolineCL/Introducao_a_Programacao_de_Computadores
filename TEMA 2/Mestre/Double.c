#include <stdio.h>

int main (){
    double numeropreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Numero preciso (double): %.15f\n", numeropreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    return 0;
}