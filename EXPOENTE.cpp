//WHILE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero = 1;
    
    do{
        printf("\nDigite um n£mero: ");
        scanf("%d", &numero);
    if(numero!=0);{
    printf("  %dý = %d\n", numero, (numero*numero));
    printf("_______________________________");
    }
    }while(numero!=0);
    
    system("PAUSE");
    return 0;
    
}
