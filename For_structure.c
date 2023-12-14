#include <stdio.h>
#include <stdlib.h>


int main (){

    int N, i, x, soma = 0;

        printf("Quantos numeros serao digitados ? ");
            scanf("%d", &N);


                for (i = 1; i <= N; i++){

                        printf("Digite um numero: ");
                            scanf("%d", &x);

                        soma = soma + x;

                }


                        printf("Soma = %d \n", soma);

                            return 0;
                        

    


    
}