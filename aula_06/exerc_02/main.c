#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

struct Habitante{
        int idade;
        char sexo;
        float salario;
        int nFilhos;
    };

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float media, soma = 0;

    struct Habitante habitantes[500];

    for(i=0; i<500; i++){
        fflush(stdin);

        printf("\nInsira a idade do habitante: ");
        scanf("%d", & habitantes[i].idade);

        printf("\nInsira o sexo do habitante: ");
        scanf("%s", & habitantes[i].sexo);

        printf("\nInsira o salário do habitante: ");
        scanf("%f", & habitantes[i].salario);

        printf("\nInsira o número de filhos do habitante: ");
        scanf("%d", & habitantes[i].nFilhos);

        fflush(stdin);

        soma += habitantes[i].salario;
    }

    media = soma/500;

    printf("\nA média do número de salário dos habitantes é: %f", media);

    return 0;
}
