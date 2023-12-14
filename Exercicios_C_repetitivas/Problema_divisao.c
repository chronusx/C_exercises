#include <stdio.h>
#include <stdlib.h>

int main (){


int N;
float x, y, divisao;


    printf("Quantos casos voce vai digitar ? ");
        scanf("%d", &N);



    for (int i = 0; i < N; i++){
   
        printf("Entre com o numerador: ");
            scanf("%f", &x);

                printf("Entre com o denominador: ");
                    scanf("%f", &y);

    if (y == 0 ){

        printf("DIVISAO IMPOSSIVEL\n");

    }
        else{

         divisao = x / y;
         printf("DIVISAO = %.2f\n", divisao);
        }


       
       
    }

















    return 0;
}