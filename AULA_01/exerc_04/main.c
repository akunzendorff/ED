#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int rep = 0, par = 0, impar = 0, soma, num = 0, multi = 0, media;

    while(rep <= 4){

    printf("Digite um número:");
    scanf("%d", & num);

    soma = num + num;

    if(num % 2 == 0){
        par++;
    }else{
        impar++;
    }

    if(num % 5 == 0){
        multi++;
    }

    rep ++;
    }
    media = soma/5;

    printf("A quantidade de números pares é: %d", par);
    printf("\nA quantidade de números ímpares é: %d", impar);
    printf("\nA média dos números inseridos é: %d", media);
    printf("\nA quantidade de números múltiplos de 5 é: %d", multi);
    return 0;
}

