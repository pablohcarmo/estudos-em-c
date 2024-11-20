#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int fatorial (int n)
{
    if ((n == 1) || (n == 0))
       return 1;
    else
       return (n * fatorial (n-1));
}


int main (void)
{
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("%d!: %d\n\n", n, fatorial(n)); 

    getch();
    system("PAUSE");
    return 0;
}
