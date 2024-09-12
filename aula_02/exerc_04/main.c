#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma1=0, soma2=0, soma3=0, soma4=0, num;

    do{
        printf("Digite um número: ");
        scanf("%d", & num);

        if((num >= 0)&&(num <= 25)){
            soma1 = soma1+1;
        }
        if((num >= 26)&&(num <= 50)){
            soma2 = soma2+1;
        }
        if((num >= 51)&&(num <= 75)){
            soma3 = soma3+1;
        }
        if((num >= 76)&&(num <= 100)){
            soma4 = soma4+1;
        }
        num++;
    }while(num >= 0);
    printf("A quantidade de números digitados entre 0-25 é: %d", soma1);
    printf("\nA quantidade de números digitados entre 26-50 é: %d", soma2);
    printf("\nA quantidade de números digitados entre 51-75 é: %d", soma3);
    printf("\nA quantidade de números digitados entre 76-100 é: %d", soma4);

    return 0;
}
