/*
                ENTRADA

scanf() : l� algo digitado seguido de um <enter>
scan=scanear, f=formatar

Armazena informa��es na vari�vel de acordo com as informa��es digitadas;

getch(): l� um caractere pressionado no teclado, sem a necessidade de um <enter>
get char

Captura um (1) caractere digitado sem pressionar a tecla Enter;

gets(): Serve para armazenar informa��es de entrada em vari�vel.

              EXEMPLO DE UTILIZA��O: scanf()

int main() {
    int idade;   <---VARI�VEL CRIADA
    printf("Digite sua idade:");
    scanf("%d", &idade);
    print("Sua idade �: %d", idade);
[...]
    
& (E COMERCIAL)= Ele indica que a informa��o vai ser salvo, vai transportar a 
informa��o para a posi��o de mem�ria principal.
           Um erro comum � n�o colocar o "&" ("E" comercial) na atribui��o de 
uma vari�vel. � obrigat�rio que seja colocado.

              EXEMPLO DE UTILIZA��O: getch()

int main() {
    char caractere;   <---VARI�VEL CRIADA
    printf("Pressione um caractere:");
    caractere = getch();
    printf("Caractere digitado: %c", caractere);
[...]

O getch (GET CHAR) n�o � necess�rio a utiliza��o do &, pois a tecla digita 
automaticamente ser� armazenado na vari�vel;
    Em algumas bibligrafias e compiladores, a fun��o � a getchar(). No 
compilador Dev-C++ � getch().

                   ENTRADA COM V�RIAS VARI�VEIS:
Exemplo: scanf("%d %d %d ...", &vari�vel, &vari�vel, &vari�vel, ...);

Se for utilizar n�meros (inteiros ou pontos flutuantes), devemos separ�-los por
"ESPA�O" ou "ENTER";
int main() {
    int altura;
    printf("Digite sua altura e idade:");
    scanf("%d" "%d", &altura, &idade);
    printf("Sua altura �: %d, altura);
[...]
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   float altura;
   int idade;
   char *nome[60];

                         {
                         printf("Digite seu nome completo:\n");
                         scanf("%[a-z A-Z]", &nome);
                         }
{

puts("Digite sua idade:\n");
scanf("%d", &idade);
}
                         {
                         printf("Digite sua altura:\n");
                         scanf("%f", &altura);
                         }
{

printf("Nome completo: %s\nIdade: %d\nAltura: %0.2f\n", &nome, idade, altura);                        
}

       system("PAUSE");
       
        printf("Digite seu nome idade e altura:\n");
        scanf("%s%d%f", &nome, &idade, &altura);                 
        printf("Nome completo: %s\nIdade: %d\nAltura: %0.2f\n", &nome, idade, altura);                        
        
               system("PAUSE");
               return 0;

}




/*                      OUTRO EXEMPLO COM V�RIAS VARI�VEIS

int main() {
    int a, b, c;
    printf("Digite os tr�s valores, separados por espa�os:");
    scanf("%d %d %d, &a, &b, &c);
    printf("Equa��o do segundo grau: %dx�+%dx+%d=0, a, b, c);
    
[...]
