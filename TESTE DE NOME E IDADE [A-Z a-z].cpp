#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main() {
    
     float altura;
     int idade;
     char nome[50];
          
     printf("Digite seu nome completo:\n"); 
     scanf("%[a-z A-Z]",nome); 
     system("CLS");
     
     printf("Digite sua idade:\n");
     scanf("%d", &idade);
     system("CLS");
     
     printf("Digite sua altura:\n");
     scanf("%0.2f", &altura);
     system("CLS");

     printf("\nNome: %s\nIdade: %d\nAltura: %0.2f\n\n", nome, &idade, &altura);
     printf("%0.2f",&altura); 
         
     system("PAUSE");
     return 0;
     }

