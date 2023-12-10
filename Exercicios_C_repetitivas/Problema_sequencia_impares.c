#include <stdio.h>
#include <stdlib.h>


int main (){


int x, i, soma;

    printf("Digite o valor de X: ");
        scanf("%d", &x);

    

    soma = 0;

    for (i = 1; i <= x ; i++){

        if (i % 2 != 0){

         soma = i;   
            
              printf("%d\n", soma);
        }

      

    }



    return 0;
}