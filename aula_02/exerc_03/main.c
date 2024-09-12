#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num=0, total=0, contadorpositivo=0, contadornegativo=0, quantidadenum=0;
    float perpos, perneg, media;

    while((num-1) != 0){
        printf("Digite um número: ");
        scanf("%d", & num);
        quantidadenum++;
        total = total+(num + num);

        if(num > 0){
            contadorpositivo++;
        }
        if(num < 0){
            contadornegativo++;
        }
        num++;
    }

    media = (float)total/(float)quantidadenum;
    perpos = ((float)contadorpositivo/((float)quantidadenum-1))*100;
    perneg = ((float)contadornegativo/((float)quantidadenum-1))*100;

    printf("A média aritmética dos valores lidos é: %f", media);
    printf("\nA quantidade de valores positivos é: %d", contadorpositivo);
    printf("\nA quantidade de valores negativos é: %d", contadornegativo);
    printf("\nO percentual de valores positivos é: %f", perpos);
    printf("\nO percentual de valores negativos é: %f", perneg);

    return 0;
}
