#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0, soma=0;

    while(i<=1000){
        if((i%2 != 0)&&(i%5 == 0)){
            soma = soma + i;
        }
        i++;
    }

    printf("O valor total da soma de todos os números é: %d", soma);

    return 0;
}
