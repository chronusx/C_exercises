#include <stdio.h>
#include <stdlib.h>

int main (){

float distancia, combustivel, consumo;

    printf("Distancia percorrida: ");
        scanf("%f", &distancia);

            printf("Combustivel gasto: ");
                scanf("%f", &combustivel);

                    

        // calculo

            consumo = distancia / combustivel;

        // fim


        printf("Consumo medio = %.3f", consumo);
        


























    return 0;
}