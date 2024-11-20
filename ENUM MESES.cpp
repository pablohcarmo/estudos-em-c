#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//definição da enum

enum meses_do_ano {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;

int main(void)
{
    printf("Digite o n£mero do mˆs: ");
    scanf("%d",&meses);
    //Testando se o valor está na faixa válida usando os valores da enum

    if((meses >= Janeiro) && (meses <= Dezembro)) {

    //switch que determina qual mes será impresso na tela
    switch(meses) {
           case Janeiro:
                printf("%d - Janeiro\n",meses);
                break;

           case Fevereiro:
                printf("%d - Fevereiro\n",meses);
                break;

           case Marco:
                printf("%d - Mar‡o\n",meses);
                break;
           
           case Abril:
                printf("%d - Abril\n",meses);
                break;

           case Maio:
                printf("%d - Maio\n",meses);
                break;

           case Junho:
                printf("%d - Junho\n",meses);
                break;

           case Julho:
                printf("%d - Julho\n",meses);
                break;

           case Agosto:
                printf("%d - Agosto\n",meses);
                break;

           case Setembro:
                printf("%d - Setembro\n",meses);
                break;

           case Outubro:
                printf("%d - Outubro\n",meses);
                break;

           case Novembro:
                printf("%d - Novembro\n",meses);
                break;

           case Dezembro:
                printf("%d - Dezembro\n",meses);
                break;
                }

          }else{
                //senão estiver na faixa válida exibe mensagem
                printf("Valor INVALIDO!!!\n");
                printf("Os valores validos para os meses do ano sao: \n\n");
                
                //Loop que exibe a faixa de valores válida
                //Note que os valores da enum são na realidade inteiros
                //então podemos incrementa-los e usar no loop

                for(meses = Janeiro; meses <= Dezembro; 'meses ++')
                printf("Mes: %d \n",meses);
  }
           getch();
           system("PAUSE");
           return 0;
} 
