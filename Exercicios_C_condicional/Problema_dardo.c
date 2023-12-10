#include <stdio.h>
#include <stdlib.h>


int main (){

float medida1, medida2, medida3;

    printf("Digite as tres distancias:\n");
        scanf("%f", &medida1);
        scanf("%f", &medida2);
        scanf("%f", &medida3);

        if (medida1 > medida2 && medida1 > medida3){

            printf("MAIOR DISTANCIA = %.2f", medida1);
        }
            else if (medida2 > medida1 && medida2 > medida3){

                 printf("MAIOR DISTANCIA = %.2f", medida2);

        }
            else{

                     printf("MAIOR DISTANCIA = %.2f", medida3);
                
            }









    return 0;
}