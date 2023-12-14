#include <stdio.h>
#include <stdlib.h>


int main (){

float nota1,nota2,notaFinal;

    printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

            printf("Digite a segunda nota: ");
                scanf("%f", &nota2);

                // calculo 

                    notaFinal = nota1 + nota2;

                // fim
    
    printf("\n");
      
      
        if (notaFinal < 60.00){

            printf("NOTA FINAL = %.1f\n", notaFinal );
            printf("REPROVADO");

        }
            else{

                printf("NOTA FINAL = %.1f", notaFinal );

            }
    

    return 0;
}