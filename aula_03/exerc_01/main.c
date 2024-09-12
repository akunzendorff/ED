#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define notas 4

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[notas], i, media, nota=0;

    for(i=0; i<notas;i++){
        printf("Digite a nota do aluno: ");
        scanf("%d", & vet[i]);
    }
    for(i=0;i<notas;i++){
        nota = vet[i]+ nota;
    }

    media = nota/notas;

    printf("A média aritmética do aluno é: %d ", media);

    return 0;
}
