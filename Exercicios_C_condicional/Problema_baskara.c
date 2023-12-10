#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

    float a, b, c, x1, x2, delta;

        printf("Coeficiente a: ");
            scanf("%f", &a);

                printf("Coeficiente b: ");
                    scanf("%f", &b);

                        printf("Coeficiente c: ");
                            scanf("%f", &c);


            delta = pow(b,2.0)- 4*a*c;
        
        
            if (a == 0 || delta < 0){
  
                printf("Essa equacao nao possui raizes reais");
            
            }

                else{

              
                    x1 = ((-b) + sqrt(delta)) / (2.0*a);
                    x2 = ((-b )- sqrt(delta)) / (2.0*a);


                    printf("X1 = %.4f\n", x1);
                    printf("X2 = %.4f\n", x2);

            }

















    return 0;
}