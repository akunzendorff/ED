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

        printf("\nInsira o título do livro: ");
        scanf("%s", & livros[i].titulo);

        printf("\nInsira o ano de Edição do livro: ");
        scanf("%d", & livros[i].anoEdicao);

        printf("\nInsira o número de páginas do livro: ");
        scanf("%d", & livros[i].nPaginas);

        printf("\nInsira o preço do livro: ");
        scanf("%f", & livros[i].preco);

        fflush(stdin);

        totalPaginas += livros[i].nPaginas;
    }

    media = totalPaginas/5;

    printf("\nA média do número de páginas dos livros é: %f", media);

    return 0;
}
