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
        printf("Digite um n�mero: ");
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

    printf("A quantidade de n�meros pares �: %d", pares-1);
    printf("\nA quantidade de n�meros �mpares �: %d", impares);
    printf("\nA m�dia de valores pares �: %f", mediapares);
    printf("\nA m�dia geral dos n�meros lidos �: %f", mediageral);

    return 0;
}
