#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int pares=0, impares=0, npares=0, ngeral=0, soma, num;
    float mediapares=0, mediageral=0;

    do{
        printf("Digite um número: ");
        scanf("%d", & num);

        if(num%2 == 0){
            pares = pares+1;
            npares = npares+num;
        }
        if(num%2 != 0){
            impares = impares+1;
            ngeral = ngeral+num;
        }

        num++;
    }while((num-1) != 0);
    soma = (pares-1) + impares;
    mediapares = (float)npares/(float)(pares-1);
    mediageral = (float)(ngeral+npares)/(float)soma;

    printf("A quantidade de números pares é: %d", pares-1);
    printf("\nA quantidade de números ímpares é: %d", impares);
    printf("\nA média de valores pares é: %f", mediapares);
    printf("\nA média geral dos números lidos é: %f", mediageral);

    return 0;
}
