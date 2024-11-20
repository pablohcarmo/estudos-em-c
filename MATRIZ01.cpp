#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    int matriz[2][2],
        valores,
        encontrei = 0,
        i,
        j;
   char s,
        n;

        system("COLOR 8B");

        printf("Digite o valor para os elementos da matriz:\n");
        printf("__________________________________________________\n");

        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            {
                printf("\nElemento[%d][%d] = ", i, j);
                scanf("%d", &matriz[i][j]);
                fflush(stdin);
            }
        }

        system("CLS");
        printf("    SAÖDA DOS DADOS DA MATRIZ\n");
        printf("________________________________");

        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
        printf("\nElemento[%d][%d] = %d\n", i,j,matriz[i][j]);
        printf("________________________________");
        }
        puts("\n\n");

/*
        printf("\nDeseja confirmar algum dado? (S/N)\n");
        scanf("c", &s, &n);
        fflush(stdin);
        
        if(s == 's' || s == 'S'){
        printf("\nDigite o elemento: ");
        scanf("%d", &matriz[i][j]);

         for(i=0; i<3; i++){
          for(j=0; j<3; j++){
          printf("\nElemento[%d][%d] = %d\n", i,j,matriz[i][j]);
          }
         }
        }
*/

        puts("\n\n");
        system("PAUSE");
        return 0;

}
