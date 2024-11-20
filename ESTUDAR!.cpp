/* VARI�VEIS: Posi��es de mem�ria, armazenar valores

Uma vari�vel precisa ser declarada, deve iniciar por letras, seguida de letras, n�meros ou "_" (underline)

TIPOS DE DADOS EM CADA VARI�VEL:
int: n�meros inteiros
float: n�meros de ponto flutuante
double: n�meros de ponto flutuante de altos valores
char: caractere (podendo ser texto)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
TABELA ASCII                                         
American Standart Code for Information Interchange                                                        
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 CONSTANTES: Elas podem servir para armazenar valores que s�o usados durante o
 programa, por�m n�o ser�o mudados em momento algum Fica mais leg�vel usar 
 constantes do que aplicar os valores diretamente.Vari�veis que n�o mudam de 
 valor, do momento em que s�o criadas at� o fim do programa, elas continuam com
 o mesmo valor. N�o pode colocar  v�rgula
  no final. 
  
  Exemplo:
#define pi 3.14
int main() {
    int base, altura;
    #define sexo 'M'

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 IMPRIMINDO O VALOR DA VARI�VEL 

printf("TEXTO",[vari�vel],[vari�vel],...); */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 16;
    printf("Eu tenho %d anos!",idade);
    system("PAUSE");

    char c;
    int i;
    printf("Usando char\n");   
    for (c = 32; c < 127; c++) {
        printf("Pos %d: char %c \t", c, c);  
    }
    
    system("PAUSE");
    
    
    return 0;
}







