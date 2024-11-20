#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()
{
    float porcentagem,
          valor = 0,
          x = 0,
          numero;

          printf("Digite o valor da porcentagem: ");
          scanf("%f", &porcentagem);

          printf("Digite  o valor: ");
          scanf("%f", &valor);

          printf("Digite o numero: ");       
          scanf("%f", &numero);

          x = valor * porcentagem;
          x = x / numero;
          printf("x = %.2f\n\n\n\n\n\n", x);
          
          getch();
          return 0;
}
