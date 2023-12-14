#include <stdio.h>
#include <stdlib.h>

int main (){

int N, fato = 1;

    printf("Digite o valor de N: ");
        scanf("%d", &N);

    if ( N > 15 ){

    printf("Numero máximo 15 reinicie o programa !");

    } 
        else{

            for (int i = 1; i <= N; i++){

            fato = fato * i;
            
            }
                
                printf("FATORIAL = %d", fato);            


        }



    return 0;
}