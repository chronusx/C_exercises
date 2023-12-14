#include <stdio.h>
#include <stdlib.h>


int main (){

int senha;

    printf("Digite a senha: ");
        scanf("%d", &senha); 
        
        while (senha != 2002){

            printf("SENHA INVALIDA ! TENTE NOVAMENTE: ");
                scanf("%d", &senha);

        }

            printf("\nAcesso permitido! ");






    return 0;
}