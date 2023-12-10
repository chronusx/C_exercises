#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main (){

       
      int nmb, soma = 0;

      printf("Digite o primeiro numero: ");
        scanf("%d", &nmb);

    while (nmb != 0){
        soma = soma + nmb;

        printf("Digite outro numero: ");
            scanf("%d", &nmb);


    }

    printf("Resultado das somas =  %d", soma);







return 0;




    }