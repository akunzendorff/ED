#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("Digite um número:");
    scanf("%d", & num);

    if(num % 2 == 0){
        printf("O número é par!\n");
    }else{
        printf("O número é ímpar!\n");
    }

    if(num >= 0){
        printf("O número é positivo!");
    }else{
        printf("O número é negativo!");
    }
    return 0;
}
