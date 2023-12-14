#include <stdio.h>
#include <stdlib.h>


int main (){

    float preco, quant, recebido, pedido, troco;

        printf("Preco unitario do produto: ");
            scanf("%f", &preco);

                printf("Quantidade comprada: ");
                    scanf("%f", &quant);

                    // calculos
                    
                    pedido = preco * quant;

                    // fim

                            
                            printf("Dinheiro recebido: ");
                                scanf("%f", &recebido);

                            // calculo

                            troco = recebido - pedido;

                            //fim

                                printf("TROCO = %.2f", troco);


                                    













    return 0;
}