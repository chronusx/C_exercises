#include <stdio.h>
#include <stdlib.h>


int main (){


int minutos;
float valor;

    printf("Digite a quantidade de minutos: ");
        scanf("%d", &minutos);

       valor = 50.00;

        if (minutos > 100){

            valor = valor + (minutos - 100) * 2.0;
                printf("Valor a pagar = R$ %.2f",valor);

        }
            
                else{
                    
                    printf("Valor a pagar = R$ %.2f", valor);

            }

























    return 0;
}