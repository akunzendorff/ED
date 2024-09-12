#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int main()
{
    // Declarar o vetor com 10 posições
    int vet[TAM], i;

    //Acessar todas as posições do vetor
    for(i=0;i<TAM;i++){
        //Solicitar os dados ao usuário
        printf("Informe o valor: ");
        scanf("\n%d", &vet[i]);
    }

    //Imprimir todos os valores do vetor
    for(i=0;i<TAM;i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

    //Imprimir somente valores pares
    for(i=0;i<TAM;i++){
            if(vet[i]%2 == 0)
        printf("%d ", vet[i]);
    }
    printf("\n");

    //Imprimir somente valores ímpares
    for(i=0;i<TAM;i++){
            if(vet[i]%2 != 0)
        printf("%d ", vet[i]);
    }

    return 0;
}
