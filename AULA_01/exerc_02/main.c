#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numdep;

    printf("Digite o c�digo do seu departamento: ");
    scanf("%d", & numdep);

    switch(numdep){
     case 1:
        printf("O seu departamento � Recursos Humanos");
        break;
    case 2:
        printf("O seu departamento � Financeiro");
        break;
    case 3:
        printf("O seu departamento � Compras");
        break;
    case 4:
        printf("O seu departamento � Vendas");
        break;
    case 5:
        printf("O seu departamento � Diretoria");
        break;
    default:
        printf("Op��o Inv�lida");
    }
    return 0;
}
