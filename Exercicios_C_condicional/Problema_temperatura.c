#include <stdio.h>
#include <stdlib.h>


int main (){

char escala;
float temperatura, conversao;

    printf("Voce vai digitar a temperatura em qual escala (C/F) ? ");
        scanf("%c", &escala);
    
    if (escala == 'F'){

        printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            conversao = (temperatura - 32) * 5.0 / 9.0;

                printf("Temperatura equivalente em Celsius: %.2f", conversao);
    }
        else if (escala == 'C'){

        printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            conversao = temperatura * 9.0 / 5.0 + 32.0;

                printf("Temperatura equivalente em Fahrenheit: %.2f", conversao);

    }





    return 0;
}