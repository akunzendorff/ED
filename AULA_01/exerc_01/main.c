#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("Digite um n�mero:");
    scanf("%d", & num);

    if(num % 2 == 0){
        printf("O n�mero � par!\n");
    }else{
        printf("O n�mero � �mpar!\n");
    }

    if(num >= 0){
        printf("O n�mero � positivo!");
    }else{
        printf("O n�mero � negativo!");
    }
    return 0;
}
