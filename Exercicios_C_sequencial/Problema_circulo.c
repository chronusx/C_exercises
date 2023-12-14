#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265359

int main (){

    float raio, area;

    printf("Digite o valor do raio do circulo: ");
        scanf("%f", &raio);

        // calculo 

            area = M_PI * pow(raio, 2.0);

        // fim


        printf("AREA = %.3f", area);
























    return 0;
}