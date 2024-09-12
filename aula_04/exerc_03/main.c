#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAML 4
#define TAMC 3

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[TAML][TAMC];
    //Contadores para a linha e a coluna
    int l, c, qtdpares
    ;

    //Preencher todas as posições com o valor zero
    for(l=0;l<TAML;l++){//Caminha pelas linhas da matriz
        for(c=0;c<TAMC;c++){//Caminha pelas colunas da matriz
            mat[l][c]=0; //Atribui 0 a linha l e coluna c
        }
    }

    //Preencher a matriz com valores informados pelo usuário
    for(l=0;l<TAML;l++){//Caminha pelas linhas da matriz
        for(c=0;c<TAMC;c++){//Caminha pelas colunas da matriz
            printf("\n Informe o valor: "); //solicita o valor
            scanf("%d", & mat[l][c]); //Armazena o valor em mat[l][c]
        }
    }

    //Descobrir quantos números pares existem na matriz
    for(l=0;l<TAML;l++){//Caminha pelas linhas da matriz
        for(c=0;c<TAMC;c++){//Caminha pelas colunas da matriz
            if(mat[l][c]%2 == 0){
                qtdpares ++; //soma a quantidade de pares
            }
        }
    }

    printf("\n A quantidade de pares: %d", qtdpares);

    return 0;
}
