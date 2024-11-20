/* VARIÁVEIS: Posições de memória, armazenar valores

Uma variável precisa ser declarada, deve iniciar por letras, seguida de letras, números ou "_" (underline)

TIPOS DE DADOS EM CADA VARIÁVEL:
int: números inteiros
float: números de ponto flutuante
double: números de ponto flutuante de altos valores
char: caractere (podendo ser texto)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
TABELA ASCII                                         
American Standart Code for Information Interchange                                                        
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 CONSTANTES: Elas podem servir para armazenar valores que são usados durante o
 programa, porém não serão mudados em momento algum Fica mais legível usar 
 constantes do que aplicar os valores diretamente.Variáveis que não mudam de 
 valor, do momento em que são criadas até o fim do programa, elas continuam com
 o mesmo valor. Não pode colocar  vírgula
  no final. 
  
  Exemplo:
#define pi 3.14
int main() {
    int base, altura;
    #define sexo 'M'

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 IMPRIMINDO O VALOR DA VARIÁVEL 

printf("TEXTO",[variável],[variável],...); */

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







