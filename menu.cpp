#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef int preco[4];

void ImprimeMenu()
{
     printf("\n\t\t\tMENU");
     printf("\n\nOpcao 1 -");
     printf("\nOpcao 2 -");
     printf("\nOpcao 3 -");
     printf("\nSair    -\n");
    }

void ApagarTela()
{
     system("CLS");
    }
 
int main(void)
{
    int opcoes

    ImprimeMenu();
    getch();

    ApagarTela();

    printf("O que deseja?\n");
    scanf("%d", &opcoes);
    for(opcoes = 1; opcoes <4; opcoes ++);





    system("PAUSE");
    return 0; 
}
 
