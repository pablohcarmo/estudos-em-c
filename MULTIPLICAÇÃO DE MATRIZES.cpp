//MULTIPLICAÇÃO DE MATRIZES

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int matriz[2][2],
        i,
        j,
        resultado = 0,
        numero;

        system("CLS");
        system("COLOR 8B");

      printf("Digite o valor para os elementos da matriz:\n");

        for(i=0;i<3;i++){
         for(j=0;j<3;j++){

          printf("\nElemento[%d][%d] = ", i, j);
          scanf("%d", &matriz[i][j]);
          fflush(stdin);
         }
        }

        system("CLS");
        printf("Agora o n£mero que deseja multiplicar a matriz: ");
        scanf("%d", &numero);

        system("CLS");
        printf("A sa¡da das matrizes multiplicadas por ‚: \n");

        for(i=0;i<3;i++)
         for(j=0;j<3;j++)
          {
           resultado = numero * matriz[i][j];
           printf("\n%d x Elemento[%d][%d] = %d\n\t\n    Multiplica‡Æo = %d\n", numero, i, j, matriz[i][j], resultado);
           printf("________________________________");
          }

        puts("\n\n");
        system("PAUSE");
        return 0;
}
