#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main ()
{
    int  num,
         num1,
         num2;
    char s;

do{
         system("CLS");
         system("COLOR 8B"); 

         printf("      TABUADA (1 a 10)      \n");
         puts("________________________________________\n\n");

         printf("Digite o n£mero da tabuada: ");
         scanf("%d", &num);
         puts("");

         switch(num) {

         case 1: for(num1 = 1; num1 <2; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 2: for(num1 = 2; num1 <3; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 3: for(num1 = 3; num1 <4; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 4: for(num1 = 4; num1 <5; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 5: for(num1 = 5; num1 <6; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 6: for(num1 = 6; num1 <7; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 7: for(num1 = 7; num1 <8; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                 break;

         case 8: for(num1 = 8; num1 <9; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                }
               }
                break;

         case 9: for(num1 = 9; num1 <10; num1++) {
                 for(num2 = 1; num2 <11; num2++) {
                 printf("%d x %d = %d\n", num1, num2, (num1*num2));
                 }
                }
                 break;

         case 10: for(num1 = 10; num1 <11; num1++) {
                  for(num2 = 1 ; num2 <11; num2++) {
                  printf("%d x %d = %d\n", num1, num2, (num1*num2));
                  }
                 }
                  break;

         default: puts("Opera‡Æo inv lida\n\n");
                  puts("Tabuada apenas apenas de 1 a 10");
                  puts("________________________________________");
                  printf("\nPablo Henrique de Souza Carmo\nI.T. - TIM Santo Andr‚\nProduzido em: %s …s %s\n", __DATE__,__TIME__);
                  puts("________________________________________");
                  system("PAUSE");
                  return 0;
                      }
         printf("\n\nDeseja realizar outro c lculo? (S/N)\nResposta: ");
         scanf("%s", &s);

         if(s == 'n' || s == 'N'){
         system("CLS");
         printf("\nPablo Henrique de Souza Carmo\nI.T. - TIM Santo Andr‚\nProduzido em: %s …s %s\n", __DATE__,__TIME__);
         puts("________________________________________");
         system("PAUSE");
         return 0;

         break;
  }
        }while(s != 'e');
}
