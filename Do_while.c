#include <stdio.h>
#include <stdlib.h>

int main (){

       
       double cel, f;
       char resp;
       
       do {
       
        printf("Digite a temperatura em Celsius: ");
            scanf(" %lf",&cel);

                f = 9.0 * cel / 5.0 + 32.0;


                printf("Equivalente em Fahrenheit: %.1lf\n", f);
                printf("Deseja repetir (s/n)? ");
                    scanf(" %c", &resp);
       
       } while (resp == 's');


            return 0;






       }








