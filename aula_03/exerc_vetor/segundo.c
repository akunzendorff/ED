#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Definir constante, só pra valores inteiros
#define TAM 5

int main()
{
    setlocale(LC_ALL,"Portuguese");

    // Declarar o vetor com 5 posições
    int numeros[TAM], copia[TAM], i;

    // Armazenar os 5 valores
    for(i = 0; i < TAM; i++){
        printf("\n Informe o valor: ");
        scanf("%d", & numeros[i]);
    }

    // Copiar os valores
    for(i = 0; i < TAM; i++){
        copia[i] = numeros[i];
    }

    // Imprimir os valores do vetor cópia
    for(i = 0; i < TAM; i++){
        printf("\n %d ", copia[i]);
    }

    return 0;
}
