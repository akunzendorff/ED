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
        fflush(stdin); //Limpar o buffer (dispositivo de entrada padrão)

        printf("\nInsira o título do livro: ");
        scanf("%s", & livros[i].titulo);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padrão)

        printf("\nInsira o ano de Edição do livro: ");
        scanf("%d", & livros[i].anoEdicao);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padrão)

        printf("\nInsira o número de páginas do livro: ");
        scanf("%d", & livros[i].nPaginas);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padrão)

        printf("\nInsira o preço do livro: ");
        scanf("%f", & livros[i].preco);

        fflush(stdin); //Limpar o buffer (dispositivo de entrada padrão)

        totalPaginas += livros[i].nPaginas;
    }

    media = (double)totalPaginas/5.0;

    printf("\nA média do número de páginas dos livros é: %lf", media);

    return 0;
}
