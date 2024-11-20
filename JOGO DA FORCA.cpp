#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char banco[15][10]= {
         "CAVALO",
         "CACHORRO",
         "COELHO",
         "BONE",
         "CANETA",
         "FIO",
         "TELEFONE",
         "CABO",
         "ENERGIA",
         "AGUA",
         "CADEIRA",
         "CARTEIRA",
         "PAPEL",
         "PIRAMIDE",
         "GATO"
         };

    char PALAVRA[10],
         letras_erradas;
    int palavra = 0,
        i;
//IMPRIMIR LINHA DA MATRIZ
    //for(i = 0; i<10; i++){
     //     printf("%c", banco[palavra][i]);
      //    }
//COPIAR LINHA DA MATRIZ PARA VETOR
    srand(time(NULL));
    palavra = rand() % 15;

     for(i = 0; i<50; i++){
          PALAVRA[i] = banco[palavra][i];
    }
          printf("\n %s \n", PALAVRA);

    printf(" _ _ _ _ _ ");
    
    while(letras_erradas != 6) {
                         
    system("PAUSE");
    return 0;
}
}
