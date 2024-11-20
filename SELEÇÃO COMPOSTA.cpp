//Seleção Composta

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nt1,
          nt2,
          nt3,
          media;

          puts("Introduza as 3 notas seguidas de espacos:");
          scanf("%3.2f", &nt1, &nt2, &nt3);

          media=((nt1+nt2+nt3)/3);

          if(media>=6.0)
          printf("Aprovado!\n");

          else(media<6.0);
          printf("Reprovado!\n");


          system("pause");
          return 0;

}
