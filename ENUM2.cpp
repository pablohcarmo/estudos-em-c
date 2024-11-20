#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

    enum dia_semana  {dom = 0, seg, ter, qua, qui, sex, sab}semana; //Lista em ordem crescente, sendo a primeira variável 0.
    enum meses       {jan = 1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez}meses;

int main(void)
{
    int semana = 1; //1 é segunda feira
    int dia = 1;
    int ano;

    system("CLS");
    system("COLOR 8B");

    printf("            CALENDµRIO\n________________________________________\n\n");
    printf("OBS: Dias da semana.\n\nDomingo       = 1\nSegunda-Feira = 2\nTer‡a-Feira   = 3\nQuarta-Feira  = 4\nQuinta-Feira  = 5\nSexta-Feira   = 6\nS bado        = 7\n");
    getch();
    system("CLS");

    printf("Que dia ‚ hoje? ");
    scanf("%d", &dia);

    printf("\nQual o dia da semana? ");
    scanf("%d", &semana);

    printf("\nQue mˆs estamos? ");
    scanf("%d", &meses);

    printf("\nE o ano ? ");
    scanf("%d", &ano);

    if((semana >= dom) && (semana <= sab)) {

    switch(semana){

    case dom:

            system("CLS");
            printf("\nDomingo, ");
            break;
            
    case seg:
            system("CLS");
            printf("\nSegunda-Feira, ");
            break;
    
    case ter:
            system("CLS");
            printf("\nTer‡a-Feira, ");
            break;

    case qua:
            system("CLS");
            printf("\nQuarta-Feira, ");
            break;

    case qui:
            system("CLS");
            printf("\nQuinta-Feira, ");

    case sex:
            system("CLS");
            printf("\nSexta-Feira, ");
            break;

    case sab:
            system("CLS");
            printf("\nS bado, ");
            break;
                      }
   }

    if(dia <=31){
     printf("dia %d de", dia);
   }

    if((meses >= jan) && (meses <= dez)) {
    switch(meses){

    case jan:
         printf(" Janeiro");
         break;

    case fev:
         printf(" Fevereiro");
         break;

    case mar:
         printf(" Mar‡o");
         break;

    case abr:
         printf(" Abril");
         break;

    case mai:
         printf(" Maio");
         break;

    case jun:
         printf(" Junho");
         break;

    case jul:
         printf(" Julho");
         break;

    case ago:
         printf(" Agosto");
         break;

    case set:
         printf(" Setembro");
         break;

    case out:
         printf(" Outubro");
         break;

    case nov:
         printf(" Novembro");
         break;

    case dez:
         printf(" Dezembro");
         break;
                  }
    }
    printf(" de %d.\n\n", ano);

    getch();
    system("PAUSE");
    return 0;
}
