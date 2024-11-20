/*                  DECLARANDO UMA STRING


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

               Declarando uma variável

char variável;          variável do tipo char
char variável[n];       variável do tipo string
              |->  ESSE [n] é o total de caracteres que eu posso colocar na variável tipo string
                Posso colocar por exemplo:     char variável[100]; ou seja, coloquei 100 caracteres.


                      STRING X CHAR
                      
char variável = 'A'
char variavel[XXXX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ABCDEFGHIJKLMNOPQRSTUVWXYZ"

Quando formos criar uma string, devemos utilizar o "delimitador" "\0". Ele significa que a string chegou ao fim.
Ele ignora os últimos caractere. Exemplo:
    _ _ _ _ _ __   |  _ _ _ _ _ _ _ 
    P A B L O \0   |  o "\0" IGNORA esses últimos caracteres que foram reservados na criação da variável
     
Caso você coloque caractere a menos, devemos acrescentar mais espaços para utilizar o \0, pois se não,
ocasionará erro.
           EXEMPLO:
Se utilizarmos 10 caracteres, reservamos 11 para o \0.
Se utilizarmos 20 caracteres, reservamos 21 para o \0.

                  LEITURA E ESCRITA COM UMA STRING
                  
printf("%c, variável);     ->Imprime variável tipo char
printf("%s, variável);     ->Imprime variável tipo string
puts(variável);            ->Imprime variável tipo string
scanf("%c", &variável);     ->Lê variável do tipo char
scanf("%s", variável);      ->Lê variável do tipo string
gets(variável);            ->Lê variável do tipo string

                                ATRIBUIÇÃO DE VALORES STRING
                                
Procedimento: strcpy(variável que vai receber a string, string);
STR= string
CPY= copy
Essa função apenas executa a variável, não há como utilizar o PRINTF.


int main() {
    char texto[30];
    -NÃO É POSSÍVEL FAZER ISSO= "Pablo Henrique";
    strcpy(texto, "Pablo Henrique");
    -variável "texto" receberá "Pablo Henrique"
    }

                      QUANTIDADE DE CARACTERES
                      
    Função: strlen(string);
    STR= string
    LEN= lenf (comprimento)
    
    int main() {
        char texto[30]= "Pablo Henrique";
        int quantidade;
        quantidade= strlen(texto);
        }
        
                    TODOS OS CARACTERES MAIÚSCULOS
                    
    Funçaõ: strupr(string);
    STR= string
    UPR= uper
    
    int main(){
        char texto[30] = "Pablo Henrique";
        strcpy(texto, strupr(texto));
    -Variável do tipo "texto" receberá "PABLO HENRIQUE"
}
              
                     TODOS OS CARACTERES MINÚSCULOS   
    
    Função: strlowr(string);
    STR= string
    lwr= lower    

    int main(){
        char texto[30] = "Pablo Henrique";
        strcpy(texto, strlwr(texto));
    -Variável do tipo "texto receberá "pablo henrique"
}

                      CONCATENAÇÃO
                      
    Função: strcat(variável que vai receber a string, string);
     
     int main(){
         char nome[20] = "Pablo";
         char sobrenome[20] = "Henrique";
         char completo[50] = "";
         strcat(completo, nome);
         strcat(completo, sobrenome);
     -Variável "completo" receberá "PabloHenrique"
}

                          CONVERSÃO DE TEXTO EM NÚMERO
                          
    Função: atoi(string); -Usada em variáveis do tipo "int"

int main() {
    char valor[10] = "12345";
    int número;
    número= atoi(valor);
    -Variável "número receberá "12345" em formato numérico
}

    Função: atof(string); -> Usada em variáveis do tipo "float"e "double"
A TO F
    
    int maint() {
        char valor[10] = "67.89";
        float número1;
        double número2;
        número1 = atof(valor);
        número2 = atof(valor);
        -Variáveis "número1" e "número2" receberão valor de "67.89" em formato numérico
}

                          CONVERSÃO DE NÚMERO EM TEXTO

Procedimento: itoa(variável numérica, string, base);
I TO A
I=

int main() {
    char valor[10];
    itoa número=4523;
    itoa(número, valor, 10);
    -Variável "texto receberá "4523"
    -Base 10, pois estamos utilizando base numérica decimal (número de 0 a 9)
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
     gets(nome);  //poderia ser scanf("%s", variável);
     
     printf("Quantidade de carcateres: %d\n\n", strlen(nome));
     //nesse caso só pode ser printf por causa da variável;
     
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
      
