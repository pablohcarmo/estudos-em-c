#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[50]= "Pablo Henrique";
    char sobrenome[]= " e Souza Carmo";
    strcat(nome, sobrenome);
    printf("Seu nome e:\n%s\n",nome , sobrenome);
    
    system("pause");
    return 0;
}
