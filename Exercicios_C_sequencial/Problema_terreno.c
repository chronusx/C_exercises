#include <stdio.h>
#include <stdlib.h>

int main (){

    float larg, comp, metroQ, area_terreno, preco_terreno;


    printf("Digite a largura do terreno: ");
        scanf("%f", &larg);

            printf("Digite o comprimento do terreno: ");
                scanf("%f", &comp);

                    printf("Digite o valor do metro quadrado: ");
                        scanf("%f", &metroQ);

             // calculo 

                    area_terreno = comp * larg;     
                    preco_terreno = metroQ * area_terreno;

    printf("Area do terreno = %.2f\n", area_terreno);
    printf("Preco do terreno = %.2f\n", preco_terreno );





return 0;



}