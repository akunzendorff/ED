#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numdep;

    printf("Digite o código do seu departamento: ");
    scanf("%d", & numdep);

    switch(numdep){
     case 1:
        printf("O seu departamento é Recursos Humanos");
        break;
    case 2:
        printf("O seu departamento é Financeiro");
        break;
    case 3:
        printf("O seu departamento é Compras");
        break;
    case 4:
        printf("O seu departamento é Vendas");
        break;
    case 5:
        printf("O seu departamento é Diretoria");
        break;
    default:
        printf("Opção Inválida");
    }
    return 0;
}
