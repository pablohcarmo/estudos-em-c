/* 
                     ESTRUTURAS CONDICIONAIS  

  Elas dão inteligência aos nossos programas!
  Conseguimos dizer o que ela fará, de acordo com as condições impostas a ele.
  Essas condições podem ser agrupadas em grandes quantidades.
  Essas condições apenas resultarão em dois valores: verdadeiro ou falso.
  Se ele é verdadeiro, ele faz uma coisa certa. Se não, se ele for falso, ele 
faz outra coisa (ou não).

                     OPERADORES LÓGICOS

Negação     :   ¬
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

Existem outros operadores, mas estes serão suficientes para a utilização em 
lógica de programação.

                      ESTRUTURA CONDICIONAL
                      
IF= SE
    Exemplo: SE(condição) ENTÃO FAÇA
              |-> algo
              
ELSE= Senão
    Exemplo:  |-> outro algo

                     AGRUPANDO CONDIÇÕES
                     
Digamos que esse programa gerencia a entrada de pessoas em uma boate. A pessoa
deve ter pelo menos 18 anos, mas tem de ser inferior a 70 anos de idade. Então
eu posso agrupar condições em apenas uma estrutura "SE".

Exemplo:    SE((idade>=18) e (idade<=70)) então faça
             |-> puts("Entrada permitida");
            SENÃO faça
              |-> puts("Entrada negada");

Portanto, o programa só fara algo se a condição for verdadeira.
Sendo verdadeiro,  ele fará algo. Se a condição não for verdadeira, ele não fará.

                   EXEMPLO DE CONDIÇÃO

Eu preciso desenvolver um programa que, ao digitar a idade de um indivíduo, ele
diga que se ele for maior de idade (não precisa dizer que se é menor de idade).
O que devemos fazer?

ESTRUTURA:
          1- Perguntar a idade para o usuário.
          2- Armazenar a idade em uma variável.
          3- Usar uma estrutura condicional que verifique se a idade for de 18
          anos ou mais.
          4- Informar que ele é maior, caso a condição seja verdadeira.
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


