#include <stdio.h>
#include <stdlib.h>


int main (){

    int hora, minuto, segundos,duracao;

    printf("Digite a duracao em segundos: ");
        scanf("%d", &duracao );

            // calculo

            hora = duracao / 3600;
            minuto = duracao % 3600 / 60;
            segundos = duracao % 60;

            printf("%d:%d:%d", hora,minuto,segundos);



















    return 0;
}