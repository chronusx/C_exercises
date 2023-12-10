#include <stdio.h>
#include <stdlib.h>


int main (){

float precoP, dinheiro, troco;
int quant;

    printf("Preco unitario do produto: ");
        scanf("%f", &precoP);

            printf("Quantidade comprada: ");
                scanf("%d", &quant);

                    printf("Dinheiro recebido: ");
                        scanf("%f",&dinheiro);

                
        troco = dinheiro - (precoP * quant);

        if (precoP * quant < dinheiro){

            printf("TROCO = %.2f", troco);

        }
            else if (precoP * quant > dinheiro){

                troco =  (precoP * quant)- dinheiro;
                printf("DINHEIRO INSUFICIENTE, FALTAM %.2f REAIS", troco);
            
            }






















    return 0;
}