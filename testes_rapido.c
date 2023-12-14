#include <stdio.h>
#include <string.h>



int main (){

double salario1, salario2;
int idade1, idade2;
char nome1[50],nome2[50];
char sexo1, sexo2;
           
        printf("Nome da primeira pessoa: ");
             fseek(stdin,0 ,SEEK_END);    
                gets(nome1);

            printf("Digite o salario da %s: ", nome1);
                scanf(" %lf", &salario1);
                
                printf("Digite o sexo da %s: ", nome1);
                    scanf(" %c", &sexo1);

                    printf("Digite a idade da %s ", nome1);
                        scanf(" %d", &idade1);
/*
    Second person ↓         first person  ↑
*/
                        
                    printf("Nome da segunda pessoa: ");
                        fseek(stdin,0 ,SEEK_END);
                            gets(nome2);

                        printf("Salario do %s: ", nome2);
                            scanf(" %lf", &salario2);

                            printf("Digite o sexo do %s: ", nome2);
                                scanf(" %c", &sexo2);
                                
                                printf("Digite a idade do %s: ", nome2);
                                    scanf(" %d", &idade2);


    printf("\n\nNome: %s\n", nome1);
    printf("Salario da %s: %.2lf\n", nome1, salario1);
    printf("Sexo da %s: %c\n\n", nome1, sexo1);
    printf("Nome: %s\n", nome2);
    printf("Salario do %s: %.2lf\n",nome2, salario2);
    printf("Sexo do %s: %c\n", nome2, sexo2);

        











return 0;


}