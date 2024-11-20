#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int  contador,
         contador2, 
         menu = 0, 
         menu2, 
         idade,
         idades[5], 
         achou;
    char nome[50],
         nomes[5][50];

    system("CLS");
    system("COLOR 8B");

    while(menu != 5) {
          printf("Escolha a op‡Æo no menu\n1 - Preencher lista\n2 - Exibir lista\n3 - Pesquisar na lista\n4 - Ordenar lista\n5 - Sair\n\nOp‡Æo escolhida: ");
          scanf("%d", &menu);
          fflush(stdin);
          system("CLS");


    switch(menu) {
                  case 1: for(contador = 0; contador <5; contador++) {
                          printf("Digite o nome do %d§ da lista: ", (contador+1));
                          scanf("%s", nomes[contador]);
                          printf("Digite a idade do %d§ da lista: ", (contador+1));
                          scanf("%d", &idades[contador]);
                          fflush(stdin);
                         }
                          break;

                  case 2: for(contador = 0; contador <5; contador++) {
                          printf("%d %s, %d anos\n", (contador + 1), nomes[contador], idades[contador]);
                         }
                          break;

                  case 3: printf("Escolha a op‡Æo do submenu\n1 - Por nome\n2 - Por idade\n\nOp‡Æo escolhida: ");
                          scanf("%d", &menu2);
                          fflush(stdin);
                          system("CLS");
                          achou = 0;
                          if(menu2 == 1) {
                          printf("Digite o nome … ser pesquisado: ");
                          scanf("%s", nome);
                          fflush(stdin);
                  while( (contador <5) && (!achou) ) {
                          if(strcmp(nomes[contador], nome) == 0) {
                          achou = 1;
                         }else {
                                contador++;
                               }
                         }
                          if(achou) {
                          printf("Existe o nome %s na lista\n", nome);
                         }else{
                          printf("NÆo existe o nome %s na lista\n", nome);
                         } 
                         }else if(menu2 == 2) {
                          printf("Digite a idade … ser pesquisada: ");
                          scanf("%d", &idade);
                          fflush(stdin);
                  while( (contador <5) && (!achou) ) {
                          if(idades[contador] == idade) {
                          achou = 1;
                         }else{
                               contador++;
                              }
                         }
                          if(achou) {
                          printf("Existe a idade %d anos na lista\n", idade);
                         }else{
                          printf("NÆo existe a idade %d anos na lista\n", idade);
                         }
                         }
                          break;
                  case 4: printf("Escolha a op‡Æo do submenu\n1 - Por nome\n2 - Por idade\nOp‡Æo escolhida ");
                          scanf("%d", &menu2);
                          fflush(stdin);
                          if(menu2 == 1) {
                          for(contador = 0; contador <4; contador++) {
                              for(contador2 = (contador +1); contador2 <5; contador2++) {
                                  if(strcmp (nomes[contador], nomes[contador2]) == 1) {
                                     strcpy (nome, nomes[contador]);
                                     strcpy (nomes[contador], nomes[contador2]);
                                     strcpy (nomes[contador2], nome);
                                     idade = idades[contador];
                                     idades[contador] = idades[contador2];
                                     idades[contador2] = idade;
                                  }
                              }
                          }
                         }else if(menu2 == 2) {
                          for(contador = 0; contador <4; contador++) {
                              for(contador2 = (contador +1); contador2 <5; contador2++) {
                                  if(strcmp (nomes[contador], nomes[contador2]) == 1) {
                                     strcpy (nome, nomes[contador]);
                                     strcpy (nomes[contador], nomes[contador2]);
                                     strcpy (nomes[contador2], nome);
                                     idade = idades[contador];
                                     idades[contador] = idades[contador2];
                                     idades[contador2] = idade;
                                  }
                              }
                          }
                      }
                          break;
                 }
                 printf("_____________________________________\n");
            }
            system("PAUSE");
            return 0;
}
