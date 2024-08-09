#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0, j=0, primos=0, divisores=0;

    for(i=1;i<=1000;i++){//gerar de 1 a 1000
            //verificar se i é primo
        for(j=1;j<=i;j++){
            if(i%j==0){
                divisores++;
            }
        }
        if(divisores==2){
            primos++;
        }
        divisores=0;
    }

    printf("A quantidade de números primos entre 1 e 1000 é: %d", primos);

    return 0;
}
