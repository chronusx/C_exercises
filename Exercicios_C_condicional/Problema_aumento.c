#include <stdio.h>
#include <stdlib.h>

int main (){

float salario, aumento, adicao;
int porcentagem = 0;

    printf("Digite o salario da pessoa: ");
        scanf("%f", &salario);

        if (salario <= 1000){

            aumento = salario + ( salario * 20/100);
            porcentagem = 20;

        }
            else if (salario > 1000 && salario <= 3000){

            aumento = salario + (salario * 15/100);
            porcentagem = 15;

        }
            else if (salario > 3000 && salario <= 8000){

            aumento = salario + (salario * 10/100);
            porcentagem = 10;

        }
            else if (salario > 8000){

            aumento = salario + (salario * 5/100);
            porcentagem = 5;

            }


        adicao = aumento - salario;

        printf("Novo salario = R$ %.2f\n", aumento);
        printf("Aumento = R$ %.2f\n", adicao);
        printf("Porcentagem = %d %%", porcentagem);









    return 0;
}