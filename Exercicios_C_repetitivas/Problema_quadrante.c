#include <stdio.h>
#include <stdlib.h> 


int main (){


float x, y;

    
    printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%f", &x);
        scanf("%f", &y);

    
    
    if (x > 0 && y > 0){

        printf("QUADRANTE Q1\n");
    }
        else if (x < 0 && y < 0){

            printf("QUADRANTE Q3\n");
    }
        else if (x < 0 && y > 0){

            printf("QUADRANTE Q2\n");
    }
        else if (x > 0 && y < 0){

            printf("QUADRANTE Q4\n");
     }



        while (x != 0 || y != 0){
            
                printf("Digite os valores das coordenadas X e Y:\n");
                scanf("%f", &x);
                scanf("%f", &y);

        
                if (x > 0 && y > 0){

                    printf("QUADRANTE Q1\n");
                }
                    else if (x < 0 && y < 0){

                        printf("QUADRANTE Q3\n");
                }
                    else if (x < 0 && y > 0){

                        printf("QUADRANTE Q2\n");
                }
                    else if (x > 0 && y < 0){

                        printf("QUADRANTE Q4\n");
                }





    }

























    return 0;
}