#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // vamos declarar e inicializar uma matriz de cinco inteiros
  int valores[] = {3, 8, 2, 1, 4};
  int encontrei = 0; // vamos inicializar encontrei como falso
  int i; // variável de controle do laço

  int valor = 100; // valor a ser pesquisado

  // vamos percorrer os elementos da matriz e verificar se o valor
  // informado está contido na mesma
  for(i = 0; i < 5; i++){
    // o valor pesquisado é igual ao valor do elemento atual?
    if(valores[i] == valor){
      encontrei = 1; // encontrei agora é verdadeiro
      break; // vamos sair do laço              
    }      
  }

  // vamos mostrar o resultado
  if(encontrei)
    printf("O valor pesquisado esta contido na matriz");
  else
    printf("O valor pesquisado NAO esta contido na matriz");  

  printf("\n\n");
  system("pause");
  return 0;
}
