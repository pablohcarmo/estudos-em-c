#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    
    int idade;
    char *mae[50], *pai[50], *nome[50], *resp3[50];
    float altura;
    float peso;

    system("cls");
    system("color 8b");

    printf("Ficha de Cadastro");

    printf("\nDigite seu nome completo: ");
    scanf("%[a-z A-Z]",nome); 
    //system("cls");

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);
    //system("cls");

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    //system("cls");

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);
    //system("cls");

    printf("\n\nDigite o nome completo dos seus responsaveis:\n");   

    printf("\nNome da mae: ");
    gets(*mae);

    printf("\nNome do pai: ");
    gets(*pai);
    //system("cls");

    printf("\n\nSua ficha consta:");
    printf("\nNome: %s", &nome);
    printf("\nIdade: %d", idade);
    printf("\nAltura: %2.2f", altura);
    printf("\nPeso: %3.2f", peso);
    printf("\nNome da Mae: %s", &mae);
    printf("\nNome do Pai: %s", &pai);
    printf("\n\n\n\n");


    system("pause");
    return 0;
}
