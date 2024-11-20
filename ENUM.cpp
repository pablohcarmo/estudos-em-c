#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

enum meses_do_ano {Janeiro =1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;

int main(void)
{
    int dia,
        ano;


    system("CLS");
    system("COlOR 8B");

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Digite o n£mero do  mˆs: ");
    scanf("%d", &meses);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    if((meses >= Janeiro) && (meses <= Dezembro))
     {
      switch(meses)
       {
        case Janeiro:
             printf("(%d) - January, %d, %d\n", meses, dia, ano);
             break;

        case Fevereiro:
             printf("(%d) - February, %d, %d\n", meses, dia, ano);
             break;

        case Marco:
             printf("(%d) - March, %d, %d\n", meses, dia, ano);
             break;

        case Abril:
             printf("(%d) - Abril, %d, %d\n", meses, dia, ano);
             break;

        case Maio:
             printf("(%d) - May, %d, %d\n", meses, dia, ano);
             break;

        case Junho:
             printf("(%d) - June, %d, %d\n", meses, dia, ano);
             break;

        case Julho:
             printf("(%d) - July, %d, %d\n", meses, dia, ano);
             break;

        case Agosto:
             printf("(%d) - August, %d, %d\n", meses, dia, ano);
             break;

        case Setembro:
             printf("(%d) - September, %d, %d\n", meses, dia, ano);
             break;

        case Outubro:
             printf("(%d) - Octuber, %d, %d\n", meses, dia, ano);
             break;

        case Novembro:
             printf("(%d) - November, %d, %d\n", meses, dia, ano);
             break;

        case Dezembro:
             printf("(%d) - Dezember, %d, %d\n", meses, dia, ano);
             break;
       }
     }

    system("PAUSE");
    return 0;
}
