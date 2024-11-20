//WHILE2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int numero=1;

    while(numero!=0){
    printf("\nDigite um numero:\n");
    scanf("%d", &numero);

    if(numero!=0){
    printf("%d(2)=%d", numero, (numero*numero));
    }
    }

    system("pause");
    return 0;

}
