#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    for(numero=1; numero<=10; numero++){
    printf("Numero: %d\n", numero);
    }
    /*
    faca quando o numero for menor que 10
         imprima um texto qualquer
         incremente a variavel numero
    */

    printf("\n\n-------------\n\n");
    numero=0;
    for(; numero<=10; numero++){
    printf("Numero: %d\n", numero);
    }

    /*
      loop infinito
    
    printf("\n\n-------------\n\n");
    for(;;){
    printf("Numero: %d\n", numero);
    }
    */

    system("pause");
    return 0;

}
