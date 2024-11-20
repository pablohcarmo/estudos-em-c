#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

bool Encontra (char vet[], char letra) {

     for (int i = 0; i < strlen (vet) ; i++) {
         if (vet[i] == letra)
            return true;
         }

     return false;

     }

int main() {

    char palavra[] = "Helicoptero";

    if( Encontra (palavra, 'i') ) {
       printf("\n\nLetra Encontrada!\n\n");

    }else{
          printf("\n\nPalavra nao Encontrada!\n\n");

    }

    system("PAUSE");
    return 0;
}

