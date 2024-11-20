#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tabuada,
        multiplicador = 0,
        resfinal;

    printf("     Tabuada 2    \n");    

    while(multiplicador<=10)
    {
    resfinal= tabuada * multiplicador;


    //printf("Digite a tabuada que vocˆ deseja: ");
    //scanf("%d", numero);
    printf("\n%d x %d = %d", tabuada, multiplicador, resfinal);
    multiplicador++;
    }
    
    puts("\n\n");
    system("PAUSE");
    return 0;
}     


