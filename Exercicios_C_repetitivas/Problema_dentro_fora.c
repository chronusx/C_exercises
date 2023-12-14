#include <stdio.h>
#include <stdlib.h>

int main (){

int N, x, i, dentro = 0, fora = 0;

    printf("Um programa para mostrar quais valores\nestao no intervalo de [10,20]\n\n ");
        printf("Quantos numeros voce vai digitar ? ");
            scanf("%d", &N);


            for (i = 0; i <= N - 1; i++ ){

                printf("Digite um numero: ");
                        scanf("%d", &x);

                    if (x >= 10 && x <= 20 ){

                    dentro = dentro + 1;


                    }

                        else {

                            fora = fora + 1;

                        }

            }


                    printf("%d DENTRO\n", dentro);
                    printf("%d FORA", fora);




    return 0;
}