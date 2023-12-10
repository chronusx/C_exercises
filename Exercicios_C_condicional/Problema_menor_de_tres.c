#include <stdio.h>
#include <stdlib.h>

int main (){

int numr1,numr2,numr3;

    printf("Primeiro valor: ");
        scanf("%d", &numr1);

            printf("Segundo valor: ");
                scanf("%d", &numr2);

                    printf("Terceiro valor: ");
                        scanf("%d", &numr3);

    if (numr1 < numr2 && numr1 < numr3){

        printf("MENOR = %d\n", numr1);

    }
        else if(numr2 < numr1 && numr2 < numr3){

        printf("MENOR = %d\n",numr2); 


    }
        else{

            printf("MENOR = %d",numr3);


    }









   return 0; 
}