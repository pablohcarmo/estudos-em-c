//MINHA CALCULADORA

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main()
{
    float x,         //Número 1
        y,         //Número 2
        result;    //Resultado
        char oper; //Operador

do{
        system("CLS");
        system("COLOR 8B"); 

        printf("          Calculadora Eletr“nica\n");
        printf("_____________________________________________\n");

        printf("\nDigite o 1§ valor:\n");
        scanf("%f", &x);

        printf("\nAgora escolha o operador:\n");
        puts("1 (+) - Adi‡Æo");
        puts("2 (-) - Subtra‡Æo");
        puts("3 (*) - Multiplica‡Æo");
        puts("4 (/) - DivisÆo");

        puts("\n");

        printf("Operador: ");
        scanf("%s", &oper);

        printf("\nDigite o 2§ valor:\n");
        scanf("%f", &y);
        system("CLS");

        switch(oper)
        {
         case '+':
              printf("%.f+%.f = %.f\n", x, y, x+y);
              result = x+y;
              break;

         case '-':
              printf("%.f-%.f = %.f\n", x, y, x-y);
              result = x-y;
              break;

         case '/':
              printf("%.f/%.f = %.f\n", x, y, x/y);
              result = x/y;
              break;

         case '*':
              printf("%.fx%.f = %.f\n", x, y, x*y);
              result = x*y;
              break;

         default:
              puts("Opera‡Æo inv lida\n");
              puts("________________________________________");
              printf("\nPablo Henrique de Souza Carmo\nI.T. - TIM Santo Andr‚\nProduzido em: %s …s %s\n", __DATE__,__TIME__);
              puts("________________________________________\n\n");

              system("PAUSE");
              return 0;
        }

        printf("\n\nDeseja realizar outro c lculo? (S/N)\nResposta: ");
        scanf("%s", &oper);

        if(oper == 'n' || oper == 'N'){
        printf("\n\n\nPablo Henrique de Souza Carmo\nI.T. - TIM Santo Andr‚\nProduzido em: %s …s %s\n\n\n\n\n\n\n\n\n", __DATE__,__TIME__);
        system("PAUSE");
        return 0;
        break;
   }
       }while(oper != 'e');
}
