#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0, resultado=1, n;

    printf("Digite um número: ");
    scanf("%d", & n);

    printf("%d! = %d", n, n);

    for(i=n-1; i>1; i--){
        resultado = resultado * n;
        printf(" x %d", i);
    }

    printf(" = %d", resultado);

    return 0;
}
