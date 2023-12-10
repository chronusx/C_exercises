#include <stdio.h>
#include <stdlib.h>


int main (){

    int N, M, i, j;
   
            printf("Informe a quantidade de linhas: ");
                scanf("%d", &N);

                    printf("Informe a quantidade de colunas: ");
                        scanf(" %d", &M);

          int mat[N] [M];


        for (i = 0; i < N; i++){
           
                for(j = 0; j < M; j++){
                    
                    printf("Elemento: [%d, %d]: ", i,j);
                        scanf(" %d", &mat[i][j]);


                }
        }
                
                
        printf("\nOs elementos sao:\n");

        for (i = 0; i < N ; i++){
            
            for(j = 0; j < M; j++){

                printf("%d ", mat[i] [j] );


            }

                printf("\n");

        }





}