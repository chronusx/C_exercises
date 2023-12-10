#include <stdio.h>
#include <stdlib.h>

int main (){

int N = 0, i = 0;

    printf("Informe quantos numeros serao armazenado: ");
        scanf("%d", &N);


        double vet[N];

        for (i = 0; i < N; i++){

            printf("Digite o numero: ");
                scanf(" %lf", &vet[i]);


        }

        printf("\nOs numeros sao: \n");

        for (i = 0; i < N; i++){

            printf("%.1lf\n", vet[i]);
        }













    return 0;

}