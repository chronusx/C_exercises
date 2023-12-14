#include <stdio.h>
#include <stdlib.h>

int main (){

char nome[50];
double valor, hora, pagamento;

    printf("Nome: ");
        gets(nome);
            fseek(stdin,0 , SEEK_END);

                    printf("Valor por hora: ");
                        scanf("%lf", &valor);

                            printf("Horas trabalhadas: ");
                                scanf("%lf", &hora);

            // calculo

                pagamento = valor * hora;

            // fim


            printf("O pagamento para %s deve ser %.2lf", nome,pagamento);

    












}