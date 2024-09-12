#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define TAM 5


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet1[TAM], vet2[TAM], i, soma[TAM];

    printf("VETOR 1\n");
    for(i=0; i<TAM;i++){
        printf("Digite um número: ");
        scanf("%d", & vet1[i]);
    }

    printf("VETOR 2\n");
    for(i=0; i<TAM;i++){
        printf("Digite um número: ");
        scanf("%d", & vet2[i]);
    }

    printf("A soma é:");
    for(i=0; i<TAM; i++){
        soma[i] = vet1[i]+vet2[i];
        printf(" %d", soma[i]);
    }

    return 0;
}
