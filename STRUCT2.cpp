#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    /*         - ENUM 
    enum semana{dom, seg, ter, qua, qui, sex, sab}; //Lista em ordem crescente, sendo que o 1° valor 0
    
    int diasemana = sab; // 1 é Segunda-Feira
    
    if(diasemana == dom || diasemana == sab{
                 printf("\nDia de Folga\n\n");
    }
    else{
         printf("\n\nDia de Trabalho\n\n");
    }
    */


//                         STRUCT

    //O seu professor pede um trabalho para cadastrar a nota de 25 alunos.

    struct TipoAluno{       //Criação de uma variável de números e caracteres
           int  nota;      //-> Campos da STRUCT
           char nome[30]; // -> Campos da STRUCT
           };

    struct TipoAluno Alunos[2];    //Criando vetor da variável
    
    
    Alunos[0].nota = 10;
    strcpy(Alunos[0].nome, "Pablo Henrique");
    
    Alunos[1].nota = 5;
    strcpy(Alunos[1].nome, "Gabriel Souza");
    
    int i = 0;
    for(i=0; i <2;i++){
             printf("Aluno: %s - Nota: %d\n", Alunos[i].nome, Alunos[i].nota);
             }
             
    system("PAUSE");
    return 0;
}
