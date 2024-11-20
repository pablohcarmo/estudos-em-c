#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
    float n1, n2, result;
    char oper;
         
         do{
         
              system("cls");
    
              puts("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
              puts("Calculadora Eletronica");
              puts("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
    
              printf("Primeiro valor: \t");
              scanf("%f", &n1);
    
              printf("Operador(+,-,*,/): \t");
              scanf("%s", &oper);
    
              printf("Segundo valor:  \t");
              scanf("%f", &n2);
    
              switch (oper)
              {
                     case '+':
                         
                         printf("Resultado: \t%.2f\n\n", n1+n2);
                         system("pause");
                         ("\n\n\n");
                         
                         result = n1+n2;
                         break;
    
                     case '-':
                          
                     printf("Resultado: \t%.2f\n\n", n1-n2);
                     system("pause");
                     ("\n\n\n");
                     
                     result = n1-n2;
                      break;
    
                     case '*':
                          
                     printf("Resultado: \t%.2f\n\n", n1*n2);
    
                     system("pause");
                     ("\n\n\n"); 
                                          result = n1*n2;
                     break;

                     case '/':
                          
                     
                     result = n1/n2;
                     break;
    
              default:
                      puts("Operador Invalida");
                      system("pause");
                      return 0;
              }


             printf("Resultado:    \t%.2f\n\n", result);
             ("\n\n\n");
              puts("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
              puts("Deseja realizar outro calculo? (s/n)");
              puts("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
              scanf("%s", &oper);
              if ( oper == 'n' || oper == 'N' ){
                   break;
                   }
              
    }while (oper != 'e');
}
