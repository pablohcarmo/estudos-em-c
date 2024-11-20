/*
                ENTRADA

scanf() : lê algo digitado seguido de um <enter>
scan=scanear, f=formatar

Armazena informações na variável de acordo com as informações digitadas;

getch(): lê um caractere pressionado no teclado, sem a necessidade de um <enter>
get char

Captura um (1) caractere digitado sem pressionar a tecla Enter;

gets(): Serve para armazenar informações de entrada em variável.

              EXEMPLO DE UTILIZAÇÃO: scanf()

int main() {
    int idade;   <---VARIÁVEL CRIADA
    printf("Digite sua idade:");
    scanf("%d", &idade);
    print("Sua idade é: %d", idade);
[...]
    
& (E COMERCIAL)= Ele indica que a informação vai ser salvo, vai transportar a 
informação para a posição de memória principal.
           Um erro comum é não colocar o "&" ("E" comercial) na atribuição de 
uma variável. É obrigatório que seja colocado.

              EXEMPLO DE UTILIZAÇÃO: getch()

int main() {
    char caractere;   <---VARIÁVEL CRIADA
    printf("Pressione um caractere:");
    caractere = getch();
    printf("Caractere digitado: %c", caractere);
[...]

O getch (GET CHAR) não é necessário a utilização do &, pois a tecla digita 
automaticamente será armazenado na variável;
    Em algumas bibligrafias e compiladores, a função é a getchar(). No 
compilador Dev-C++ é getch().

                   ENTRADA COM VÁRIAS VARIÁVEIS:
Exemplo: scanf("%d %d %d ...", &variável, &variável, &variável, ...);

Se for utilizar números (inteiros ou pontos flutuantes), devemos separá-los por
"ESPAÇO" ou "ENTER";
int main() {
    int altura;
    printf("Digite sua altura e idade:");
    scanf("%d" "%d", &altura, &idade);
    printf("Sua altura é: %d, altura);
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




/*                      OUTRO EXEMPLO COM VÁRIAS VARIÁVEIS

int main() {
    int a, b, c;
    printf("Digite os três valores, separados por espaços:");
    scanf("%d %d %d, &a, &b, &c);
    printf("Equação do segundo grau: %dx²+%dx+%d=0, a, b, c);
    
[...]
