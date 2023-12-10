#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main (){

        float base, altura, area, perimetro, diagonal;

            printf("Informe a base do retangulo: ");
                scanf("%f", &base);

                    printf("Informe a altura do retangulo: ");
                        scanf("%f", &altura);

                
                // calculo

                        area = base * altura;
                        perimetro = 2 * (base + altura);
                        diagonal = sqrt (pow (base, 2.0) + pow (altura, 2.0));
                
                
                // fim calculo

            printf("Area = %.4f\n", area);
            printf("Perimetro = %.4f\n", perimetro);
            printf("Diagonal = %.4f\n", diagonal);




    return 0;


    }