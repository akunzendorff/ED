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
        printf("Digite um n�mero: ");
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

    printf("A m�dia aritm�tica dos valores lidos �: %f", media);
    printf("\nA quantidade de valores positivos �: %d", contadorpositivo);
    printf("\nA quantidade de valores negativos �: %d", contadornegativo);
    printf("\nO percentual de valores positivos �: %f", perpos);
    printf("\nO percentual de valores negativos �: %f", perneg);

    return 0;
}
