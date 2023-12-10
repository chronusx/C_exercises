#include <stdio.h>
#include <stdlib.h>

int main () {

int x = 0, alcool = 0, gasolina = 0, diesel = 0;

         printf ("Informe um codigo (1, 2, 3,) ou 4 para parar: ");
            scanf("%d", &x);
    
    while (x != 4 ) {

         printf ("Informe um codigo (1, 2, 3,) ou 4 para parar: ");
            scanf("%d", &x);

    
    
        if (x == 1){

            alcool = alcool + 1;
        }        
            else if (x == 2 ){

                gasolina = gasolina + 1;
            }
                else if (x == 3){

                    diesel = diesel + 1;
                }
                    else if (x == 4){

                       printf("\nMUITO OBRIGADO\n");
                       printf("Alcool: %d\n", alcool);
                       printf("Gasolina: %d\n", gasolina);
                       printf("Diesel: %d\n", diesel); 
                    

                    }










    }





    return 0;
}