/*Primeiro declaramos uma vari�vel, e inicializamos ela com o valor inicial, que � 1.
Logo em seguida ,fazemos com que o while d� um printf, mostrando o valor dessa vari�vel
 ENQUANTO ela for MENOR ou IGUAL a 10.
Ap�s imprimir o n�mero 10, a vari�vel � incrementada e passa a ter valor 11.
Como 11 n�o � menor ou igual a 10, o la�o recebe valor l�gico FALSE e termina sua 
execu��o.
*/




#include <stdio.h>
#include <stdlib.h>

int main(void)
{                   
        int numero=1;
        while(numero <= 10)
        {
            printf("%d\n", numero);
            numero++;
        }

        system("PAUSE");
        return 0;
}



/*                      VOID

void significa nulo, ou seja, a fun��o n�o tem retorno, nada impede que vc fa�a uma fun��o
int ou float sem ter retorno, por�m vai fazer o compilador procurar um retorno desnecessariamente.

                       EXEMPLOS:

int funcao(int a, int b)//o primeiro int � o retorno, os demais argumentos da fun��o 
return a + b; 
}

Ao ler esta fun��o o retorno sera a soma, como foi indicado um return (retorno) e vc no retorno
int colocar void vai dar erro.
Uma fun��o void geralmente � usado para organizar o programa, ao inves de no program principal main voc� fazer: 

main{

blablabla

}

voc� pode fazer:
     
void fun��oQualquer() {
     blablabla

}

                      E NO MAIN
                      
main{
     FUN��O QUALQUER();
     
}     
     
void fun��o(); ou void fun��o (void); da no mesmo, pois() � uma fun��o sem argumento e (void) tamb�m.



