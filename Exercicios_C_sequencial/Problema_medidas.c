#include <stdio.h>
#include <stdlib.h>

int main (){


    float A, B, C;
  

        printf("Digite a medida A: ");
            scanf("%f", &A);
                
                printf("Digite a medida B: ");
                    scanf("%f", &B);

                        printf("Digite a medida C: ");
                            scanf("%f", &C);

     
     float Aquadrado, Atriangulo, Atrapezio;

      // calculo a) 

        Aquadrado = A * A;
    
      // b)

        Atriangulo = A * B / 2.0;

      // c)

        Atrapezio =  (A + B) * C / 2.0;  
      
      // fim  


        printf("\n");
        printf("AREA DO QUADRADO = %.4f\n", Aquadrado);
        printf("AREA DO TRIANGULO = %.4f\n", Atriangulo);
        printf("AREA DO TRAPEZIO = %.4f\n", Atrapezio);






















    return 0;
}