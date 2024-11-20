#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{
    float preco = 0,
          salario = 0,
          total = 0;
    char  produto[4][50];

    fflush(stdin);
    system("CLS");
    system("COLOR 8B");
    printf("                 CµLCULO DE CONTROLE DE GASTOS NO MÒS");
    puts("\n________________________________________________________________________________\n\nOBS: Neste programa, vocˆ pode escolher entre pagar de 1 a 5 produtos.");
    printf("\n\nPrimeiramente, informe o seu sal rio: R$ ");
    scanf("%f", &salario);
    fflush(stdin);
    system("CLS");


    printf("\nDigite o nome do 1§ produto: ");
    scanf("%s", produto[0]);
    fflush(stdin);
    printf("\nAgora digite o valor dele: ");
    scanf("%f", &preco);
    fflush(stdin);
    system("CLS");
    total = salario - preco;
    printf("Seu saldo ‚: R$ %.2f", total);

    getch();
    system("CLS");
    printf("\nDigite o nome do 2§ produto: ");
    scanf("%s", produto[1]);
    fflush(stdin);
    printf("\nAgora digite o valor dele: ");
    scanf("%f", &preco);
    fflush(stdin);
    system("CLS");
    total = total - preco;
    printf("Seu saldo ‚: R$ %.2f", total);

    getch();
    system("CLS");
    printf("\nDigite o nome do 3§ produto: ");
    scanf("%s", produto[2]);
    fflush(stdin);
    printf("\nAgora digite o valor dele: ");
    scanf("%f", &preco);
    fflush(stdin);
    system("CLS");
    total = salario - preco - preco - preco;
    printf("Seu saldo ‚: R$ %.2f", total);

    getch();
    system("CLS");
    printf("\nDigite o nome do 4§ produto: ");
    scanf("%s", produto[3]);
    fflush(stdin);
    printf("\nAgora digite o valor dele: ");
    scanf("%f", &preco);
    fflush(stdin);
    system("CLS");
    total = total - preco;
    printf("Seu saldo ‚: R$ %.2f", total);

    getch();
    system("CLS");
    printf("\nDigite o nome do 5§ produto: ");
    scanf("%s", produto[4]);
    fflush(stdin);
    printf("\nAgora digite o valor dele: ");
    scanf("%f", &preco);
    fflush(stdin);
    system("CLS");
    total = total - preco;
    printf("Seu saldo ‚: R$ %.2f\n\n", total);

    getch();
    system("CLS");
    printf("Vocˆ comprou: %s\t\n      %c\t\n %s     \t\n %s     \t\n %s     \t\n     %s\n\n\n", produto[0], produto[1], produto[2], produto[3], produto[4]);

    system("PAUSE");
    return 0;
}
