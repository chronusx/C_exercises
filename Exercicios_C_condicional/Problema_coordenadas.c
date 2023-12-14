#include <stdio.h>
#include <stdlib.h>

int main () {

float X,Y;

    printf("Valor de X: ");
        scanf("%f", &X);

            printf("Valor de Y: ");
                scanf("%f", &Y);

    
        if (X > 0 && Y > 0){

        printf("Q1\n");

    }
        else if (X < 0 && Y > 0){

        printf("Q2\n");  

    }
        else if ( X < 0 && Y < 0){
            
        printf("Q3\n");

    }
     
        else if (X > 0 && Y < 0){

        printf("Q4\n");    

    }

        else if (X == 0 && Y == 0){
            
        printf("Origem\n");

    }
        else if (X > 0 || Y == 0) {

        printf("Eixo X\n"); 

    }
        else {

            printf("Eixo Y\n");
        }


    system("pause");
    
    return 0;
}