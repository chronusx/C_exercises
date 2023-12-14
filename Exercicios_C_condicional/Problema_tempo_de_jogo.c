#include <stdio.h>
#include <stdlib.h>

int main (){

int hinicial, hfinal;

    printf("Hora inicial: ");
        scanf("%d", &hinicial);

            printf("Hora final: ");
                scanf("%d", &hfinal);


    if (hinicial < hfinal) {

        printf("O JOGO DUROU %d HORAS(S)", hfinal - hinicial );

    }
    
        else  {

        printf("O JOGO DUROU %d HORA(S)", 24 - (hinicial - hfinal));

    }





    return 0;
}