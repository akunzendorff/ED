#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

struct Livro{
        char titulo[100];
        int anoEdicao;
        int nPaginas;
        float preco;
    };

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float media, totalPaginas = 0;

    struct Livro livros[5];

    for(i=0; i<5; i++){
        fflush(stdin);

        printf("\nInsira o t�tulo do livro: ");
        scanf("%s", & livros[i].titulo);

        printf("\nInsira o ano de Edi��o do livro: ");
        scanf("%d", & livros[i].anoEdicao);

        printf("\nInsira o n�mero de p�ginas do livro: ");
        scanf("%d", & livros[i].nPaginas);

        printf("\nInsira o pre�o do livro: ");
        scanf("%f", & livros[i].preco);

        fflush(stdin);

        totalPaginas += livros[i].nPaginas;
    }

    media = totalPaginas/5;

    printf("\nA m�dia do n�mero de p�ginas dos livros �: %f", media);

    return 0;
}
