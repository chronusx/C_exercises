#include <stdio.h>
#include <stdlib.h>

int main (){

float nota1, nota2, media;


    printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

    if (nota1 < 0 || nota1 > 10.0 ){
    
        while ( nota1 < 0 || nota1 > 10.0 ){
            printf("Valor invalido! Tente novamente: ");
                scanf("%f", &nota1);

    }
    }

      
        printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
            
    if (nota2 < 0 || nota2 > 10.0 ){
    
        while (nota2 < 0 || nota2 > 10.0 ){
            printf("Valor invalido! Tente novamente: ");
                scanf("%f", &nota2);

    }
    }
 
            media = (nota1 + nota2) / 2.0;

                printf("MEDIA = %.2f", media);










    return 0;
}