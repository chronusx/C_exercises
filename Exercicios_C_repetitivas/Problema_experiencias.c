#include <stdio.h>
#include <stdlib.h>


int main (){

int N, countC = 0, countS = 0, countR = 0, cobaiaQ; 
char cobaia;

    
    printf("Quantos casos de teste serao digitados ? ");
        scanf("%d", &N);

    for (int i = 0; i < N; i++){

        printf("Quantidade de cobaias: ");
                scanf("%d", &cobaiaQ);
                    printf("Tipo de cobaia: ");
                        scanf(" %c", &cobaia);
                

    if (cobaia == 'c'){
        
        countC = countC + cobaiaQ;

    }
        else if (cobaia == 's'){

        countS = countS + cobaiaQ;

    }
        else if (cobaia == 'r'){

        countR = countR + cobaiaQ;

    }

    }
       
        int soma = countR + countS + countC;      
        float percC, percS, percR;


        percC =((float) countC / soma) * 100.0;
        percS =((float) countS / soma) * 100.0;
        percR =((float) countR / soma) * 100.0;

        printf("\nRELATORIO FINAL:\n");
        printf("\nTotal: %d cobaias\n", soma);
        printf("Total de coelhos: %d\n", countC);
        printf("Total de ratos: %d\n", countR);
        printf("Total de sapos: %d\n", countS);

        printf("\nPercentual de coelhos: %.2f\n", percC);
        printf("Percentual de ratos: %.2f\n", percR);
        printf("Percentual de  sapos: %.2f\n", percS);
        









    return 0;
}