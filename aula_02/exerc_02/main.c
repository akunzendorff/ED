#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0;
    float altura, maior=0, menor=3;

    while(i <= 8){
        printf("Digite a altura:");
        scanf("%f", &altura);

        if(altura > maior){
            maior = altura;
        }
        if(altura < menor){
            menor = altura;
        }
        i++;
    }
    printf("A maior altura digitada foi: %f", maior);

    printf("\nA menor altura digitada foi: %f", menor);

    return 0;
}
