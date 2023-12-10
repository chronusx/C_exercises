#include <stdio.h>
#include <stdlib.h>

int main (){


float x, count, soma, media;
    
    printf("Digite as idades:\n");
    scanf("%f", &x);
    
    if (x < 0) {

        printf("IMPOSSIVEL CALCULAR");

}
    else {

            while (x > 0) {     
                        
                
                    soma = soma + x;
                        
                    count = count + 1;
                            
                        scanf("%f", &x);
                                
                    media = soma / count;

                                   
            
                    
}
                    printf("MEDIA = %.2f", media);


}

                          


    return 0;
}