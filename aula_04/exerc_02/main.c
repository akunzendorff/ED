#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAML 5
#define TAMC 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[TAML][TAMC];
    //Contadores para a linha e a coluna
    int l, c, vet[c];


    //Preencher todas as posições com o valor zero
    for(l=0;l<TAML;l++){//Caminha pelas linhas da matriz
        for(c=0;c<TAMC;c++){//Caminha pelas colunas da matriz
                if(mat[l] == mat[c]){
                    mat[l][c]=1; //Atribui 1 a linha l e coluna c
                    vet[c] = mat[l][c];
                }else{
                    mat[l][c]=0; //Atribui 0 a linha l e coluna c
                }
        }
    }

    for(c=0;c<TAMC;c++){
        printf("%d ", vet[c]);
    }

    return 0;
}
