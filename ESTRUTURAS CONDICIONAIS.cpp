/* 
                     ESTRUTURAS CONDICIONAIS  

  Elas d�o intelig�ncia aos nossos programas!
  Conseguimos dizer o que ela far�, de acordo com as condi��es impostas a ele.
  Essas condi��es podem ser agrupadas em grandes quantidades.
  Essas condi��es apenas resultar�o em dois valores: verdadeiro ou falso.
  Se ele � verdadeiro, ele faz uma coisa certa. Se n�o, se ele for falso, ele 
faz outra coisa (ou n�o).

                     OPERADORES L�GICOS

Nega��o     :   �
E           :   ^
Ou          :   v
Ou exclusivo:   v

                     OPERADORES RELACIONAIS
                     
igual:  =
Diferente: !=
Maior que: >
Menor que: <
Maior ou igual a: >=
Menor ou igual a: <=

Existem outros operadores, mas estes ser�o suficientes para a utiliza��o em 
l�gica de programa��o.

                      ESTRUTURA CONDICIONAL
                      
IF= SE
    Exemplo: SE(condi��o) ENT�O FA�A
              |-> algo
              
ELSE= Sen�o
    Exemplo:  |-> outro algo

                     AGRUPANDO CONDI��ES
                     
Digamos que esse programa gerencia a entrada de pessoas em uma boate. A pessoa
deve ter pelo menos 18 anos, mas tem de ser inferior a 70 anos de idade. Ent�o
eu posso agrupar condi��es em apenas uma estrutura "SE".

Exemplo:    SE((idade>=18) e (idade<=70)) ent�o fa�a
             |-> puts("Entrada permitida");
            SEN�O fa�a
              |-> puts("Entrada negada");

Portanto, o programa s� fara algo se a condi��o for verdadeira.
Sendo verdadeiro,  ele far� algo. Se a condi��o n�o for verdadeira, ele n�o far�.

                   EXEMPLO DE CONDI��O

Eu preciso desenvolver um programa que, ao digitar a idade de um indiv�duo, ele
diga que se ele for maior de idade (n�o precisa dizer que se � menor de idade).
O que devemos fazer?

ESTRUTURA:
          1- Perguntar a idade para o usu�rio.
          2- Armazenar a idade em uma vari�vel.
          3- Usar uma estrutura condicional que verifique se a idade for de 18
          anos ou mais.
          4- Informar que ele � maior, caso a condi��o seja verdadeira.
*/

#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int num;
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	if (num>10)
     		puts ("O numero e maior que 10");
	else if (num==10)
        {
        	puts ("Voce acertou!");
        	puts ("O numero e igual a 10");
        }
     	else if (num<10) 
             puts ("O numero e menor que 10");
   
    system("PAUSE");
	return(0);
}


