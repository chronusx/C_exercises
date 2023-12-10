#include <stdio.h>
#include <stdlib.h>

int main (){

float valor1, valor2, valor3, media;
int N;

    printf ("Quantos casos voce vai digitar ? ");
        scanf("%d", &N);
        
            

        

        for (int i = 0; i < N; i++){
            
            printf("Digite tres numeros:\n");
                
                scanf("%f %f %f", &valor1, &valor2, &valor3);
               
                   
                        media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0;
                        
                        printf("MEDIA = %.1f\n", media);    
                    

        }





    return 0;
}