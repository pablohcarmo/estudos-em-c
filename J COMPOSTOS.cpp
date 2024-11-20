#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{
    float meses,        //  t (Meses)
          montante = 0, // JUROS, no caso, iremos calculá-lo
          porcentagem,  // Valor por cento que irá pagar durante o período
          valor,        // P (Empréstimo ou Dívida)
          resultado = 0;

    system("CLS");
    system("COLOR 8B");

    printf("                ESTE PROGRAMA CALCULA JUROS COMPOSTOS\n\n");

    printf("\nDigite o valor emprestado ou d¡vida: ");
    scanf("%f", &valor);

    printf("\nDigite o n£mero de meses que pagar : ");
    scanf("%f", &meses);
    fflush(stdin);

    printf("\nDigite a porcentagem (apenas o n£mero) do juros: ");
    scanf("%f", &porcentagem);
    fflush(stdin);

    montante = valor * ( meses + (porcentagem / 100));

    system("CLS");
    printf("Vocˆ ir  pagar R$ %.2f em %.f mes(es)\n\n", montante, meses);

    getch();
    system("PAUSE");
    return 0;
}
