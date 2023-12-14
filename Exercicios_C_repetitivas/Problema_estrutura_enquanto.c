#include <stdio.h>
#include <stdlib.h>

int main (){

int x, y;


        printf("Digite dois numeros:\n");
                scanf("%d", &x);
                scanf("%d", &y);

                    
               
 while (x != 0 && y != 0){

        if (x > y){

                        printf("DECRESCENTE !\n");
                    
                    }
                        else if (x < y){

                        printf("CRESCENTE !\n");    
                    
                    }
                        else {
                        
                        printf("");
                            
                    }

     
        
                    printf("Digite outro dois numeros:\n");
                                scanf("%d", &x);
                                scanf("%d", &y);
                    
}

    return 0;
}