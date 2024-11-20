#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int fatorial (int n)
{
    if((n == 1) || (n == 0))
    return 1;

    else
    return (n * fatorial (n-1));
}

int main(void)
{
    int n;
    char oper, s;

do{
    system("COLOR 8B");
    printf("                  CALCULAR FATORIAIS\n______________________________________________________\n");

    printf("Digite a fatorial: ");
    scanf("%d", &n);

    printf("\n%d! = %d\n\n\n", n, fatorial(n));
              getch();
              printf("Deseja realizar outro calculo? (S/N) ");
              scanf("%s", &oper);
              if ( oper == 'n' || oper == 'N' ){
              puts("_________________________________________");
              printf("\nPablo Henrique de Souza Carmo\nWholesale - Interconex∆o\nITS/OPS\nTIM Celular S.A.\nProduzido em: %s Ös %s \n\n", __DATE__,__TIME__);
              system("PAUSE");
              return 0;
                   }
    }while (oper != 'e');

  }
