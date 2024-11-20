/*                  DECLARANDO UMA STRING


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

               Declarando uma vari�vel

char vari�vel;          vari�vel do tipo char
char vari�vel[n];       vari�vel do tipo string
              |->  ESSE [n] � o total de caracteres que eu posso colocar na vari�vel tipo string
                Posso colocar por exemplo:     char vari�vel[100]; ou seja, coloquei 100 caracteres.


                      STRING X CHAR
                      
char vari�vel = 'A'
char variavel[XXXX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ABCDEFGHIJKLMNOPQRSTUVWXYZ"

Quando formos criar uma string, devemos utilizar o "delimitador" "\0". Ele significa que a string chegou ao fim.
Ele ignora os �ltimos caractere. Exemplo:
    _ _ _ _ _ __   |  _ _ _ _ _ _ _ 
    P A B L O \0   |  o "\0" IGNORA esses �ltimos caracteres que foram reservados na cria��o da vari�vel
     
Caso voc� coloque caractere a menos, devemos acrescentar mais espa�os para utilizar o \0, pois se n�o,
ocasionar� erro.
           EXEMPLO:
Se utilizarmos 10 caracteres, reservamos 11 para o \0.
Se utilizarmos 20 caracteres, reservamos 21 para o \0.

                  LEITURA E ESCRITA COM UMA STRING
                  
printf("%c, vari�vel);     ->Imprime vari�vel tipo char
printf("%s, vari�vel);     ->Imprime vari�vel tipo string
puts(vari�vel);            ->Imprime vari�vel tipo string
scanf("%c", &vari�vel);     ->L� vari�vel do tipo char
scanf("%s", vari�vel);      ->L� vari�vel do tipo string
gets(vari�vel);            ->L� vari�vel do tipo string

                                ATRIBUI��O DE VALORES STRING
                                
Procedimento: strcpy(vari�vel que vai receber a string, string);
STR= string
CPY= copy
Essa fun��o apenas executa a vari�vel, n�o h� como utilizar o PRINTF.


int main() {
    char texto[30];
    -N�O � POSS�VEL FAZER ISSO= "Pablo Henrique";
    strcpy(texto, "Pablo Henrique");
    -vari�vel "texto" receber� "Pablo Henrique"
    }

                      QUANTIDADE DE CARACTERES
                      
    Fun��o: strlen(string);
    STR= string
    LEN= lenf (comprimento)
    
    int main() {
        char texto[30]= "Pablo Henrique";
        int quantidade;
        quantidade= strlen(texto);
        }
        
                    TODOS OS CARACTERES MAI�SCULOS
                    
    Fun�a�: strupr(string);
    STR= string
    UPR= uper
    
    int main(){
        char texto[30] = "Pablo Henrique";
        strcpy(texto, strupr(texto));
    -Vari�vel do tipo "texto" receber� "PABLO HENRIQUE"
}
              
                     TODOS OS CARACTERES MIN�SCULOS   
    
    Fun��o: strlowr(string);
    STR= string
    lwr= lower    

    int main(){
        char texto[30] = "Pablo Henrique";
        strcpy(texto, strlwr(texto));
    -Vari�vel do tipo "texto receber� "pablo henrique"
}

                      CONCATENA��O
                      
    Fun��o: strcat(vari�vel que vai receber a string, string);
     
     int main(){
         char nome[20] = "Pablo";
         char sobrenome[20] = "Henrique";
         char completo[50] = "";
         strcat(completo, nome);
         strcat(completo, sobrenome);
     -Vari�vel "completo" receber� "PabloHenrique"
}

                          CONVERS�O DE TEXTO EM N�MERO
                          
    Fun��o: atoi(string); -Usada em vari�veis do tipo "int"

int main() {
    char valor[10] = "12345";
    int n�mero;
    n�mero= atoi(valor);
    -Vari�vel "n�mero receber� "12345" em formato num�rico
}

    Fun��o: atof(string); -> Usada em vari�veis do tipo "float"e "double"
A TO F
    
    int maint() {
        char valor[10] = "67.89";
        float n�mero1;
        double n�mero2;
        n�mero1 = atof(valor);
        n�mero2 = atof(valor);
        -Vari�veis "n�mero1" e "n�mero2" receber�o valor de "67.89" em formato num�rico
}

                          CONVERS�O DE N�MERO EM TEXTO

Procedimento: itoa(vari�vel num�rica, string, base);
I TO A
I=

int main() {
    char valor[10];
    itoa n�mero=4523;
    itoa(n�mero, valor, 10);
    -Vari�vel "texto receber� "4523"
    -Base 10, pois estamos utilizando base num�rica decimal (n�mero de 0 a 9)
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
     char exemplo1;        //cabe apenas 1 caractere
     char exemplo2[100];  //cabe 1 a 99 caracteres
     char nome[255], str_idade[10];
     int int_idade;
     
     puts("Digite seu nome completo:");  //poderia ser printf("texto");
     gets(nome);  //poderia ser scanf("%s", vari�vel);
     
     printf("Quantidade de carcateres: %d\n\n", strlen(nome));
     //nesse caso s� pode ser printf por causa da vari�vel;
     
     printf("Todo em maiusculo: %s\n\n",strupr(nome));
     
     printf("Todo em minusculo: %s\n\n", strlwr(nome));
     
     strcat(nome, ", Curte o Computacao Depressao!");
     puts(nome);
     
     puts("Digite sua idade:");
     scanf("%d", &int_idade);
     itoa(int_idade, str_idade, 10);
     printf("Idade em string: %s\n\n", str_idade);
     
     int_idade = 0;
     int_idade = atoi(str_idade);
     printf("Idade novamente em int: %d\n\n", int_idade);
     
     system("PAUSE");
     return 0;
     
}
      
