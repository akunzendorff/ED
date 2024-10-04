#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

typedef struct Livro{
        char titulo[100];
        int anoEdicao;
        int nPaginas;
        float preco;
    }L;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    double media, totalPaginas = 0;

    L livros[5]; // Criando o vetor

    for(i=0; i<5; i++){
        fflush(stdin); //Limpar o buffer (dispositivo de entrada padr�o)

        printf("\nInsira o t�tulo do livro: ");
        scanf("%s", & livros[i].titulo);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padr�o)

        printf("\nInsira o ano de Edi��o do livro: ");
        scanf("%d", & livros[i].anoEdicao);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padr�o)

        printf("\nInsira o n�mero de p�ginas do livro: ");
        scanf("%d", & livros[i].nPaginas);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padr�o)

        printf("\nInsira o pre�o do livro: ");
        scanf("%f", & livros[i].preco);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padr�o)

        totalPaginas += livros[i].nPaginas;
    }

    media = (double)totalPaginas/5.0;

    printf("\nA m�dia do n�mero de p�ginas dos livros �: %lf", media);

    return 0;
}
