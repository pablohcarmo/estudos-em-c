#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)    
{   
    int matriz[2][2],
    i,
    j;

        printf ("\nDigite valor para os elementos da matriz\n\n");
        for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ )
        
        {        
        printf("\nElemento[%d][%d] = ", i, j);
        scanf("%d", &matriz[ i ][ j ]);

        fflush(stdin);
        }

        printf("\n\n******************* Saida de Dados ********************* \n\n");
        for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ )

        {        
        printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
        }

        system("PAUSE");
        return(0);
}
