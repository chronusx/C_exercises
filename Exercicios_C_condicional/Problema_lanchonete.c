#include <stdio.h>
#include <stdlib.h>

int main (){

int i, N;
float preco[5];

printf("Insira o preco dos produtos \n");
    
    for (i = 0; i <= 4; i++){

        printf("Preco do produto %d: R$ ", i+1 );
            scanf("%f", &preco[i]);

    }
        printf("Os precos dos produtos sao:\n"); 
            for (i = 0; i <= 4; i++){

                printf("Produto %d: %.2f \n", i+1 ,preco[i]);

            }


   int codigo, qnt;
   float valor; 
   
do {
    printf("Codigo do produto comprado: ");
        scanf("%d", &codigo);

            printf("Quantidade comprada: ");
                scanf("%d", &qnt);


    if (codigo == 1){

        valor = preco[0] * qnt;
        printf("Valor a pagar: R$ %.2f\n", valor);

    }
        else if (codigo == 2){

            valor = preco[1] * qnt;
            printf("Valor a pagar: R$ %.2f\n", valor);
        }
            else if (codigo == 3){

                valor = preco[2] * qnt;
                printf("Valor a pagar: R$ %.2f\n", valor);

            }
                else if (codigo == 4){

                    valor = preco[3] * qnt;
                    printf("Valor a pagar: R$ %.2f\n", valor);

                }
                    else if (codigo == 5){

                    valor = preco[4] * qnt;
                    printf("Valor a pagar: R$ %.2f\n", valor);

                    }

} while (codigo != 0);





    return 0;
}