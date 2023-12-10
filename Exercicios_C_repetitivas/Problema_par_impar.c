#include <stdio.h>
#include <stdlib.h>


int main (){

   int N, x, i;
   
    printf("Quantos numeros voce vai digitar ? ");
        scanf("%d", &N);

        for (i = 0; i <= N - 1; i++){

            printf("Digite um numero: ");
                scanf("%d", &x);

                if (x % 2 != 0 && x < 0){

                    printf("IMPAR ");
                    printf("NEGATIVO\n");
                }   
                    else if (x % 2 == 0 && x > 0){

                    printf("PAR ");
                    printf("POSITIVO\n");      
                
                }
                    else if (x % 2 == 0 && x < 0 ){

                    printf("PAR ");
                    printf("NEGATIVO\n");

                }
                    else if (x % 2 != 0 && x > 0){

                    printf("IMPAR ");
                    printf("POSITIVO\n");
                    
                }
                     else if (x == 0){
                    
                    printf("NULO\n");

                }



        }














    return 0;
}