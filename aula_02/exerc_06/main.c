#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i=100;

    while(i<=200){
        if(i%2 == 1){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
