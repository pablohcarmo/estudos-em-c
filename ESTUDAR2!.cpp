// Este é um comentário de uma linha 

/* Este é um
 comentário
 de várias
  linhas */
 
 // Comentários não são compilados, então, teoricamente, o programa não começou
 
 /* Indicando que utilizarei algumas bibliotecas da linguagem C 
 stdio.h -> biblioteca padrão das funções de entrada e saída
 stdlib.h -> biblioteca que dá a possibilidade de várias funções, porém vou
             utilizá-la para interromper o programa com o system("PAUSE") */
             
#include <stdio.h> //H: HEADER (CABEÇALHO)
#include <stdlib.h>
 
 /* Este espaço serviria para eu declarar várias variáveis, funções, procedimentos... */
 
 // Agora sim o programa começa! A função main() é a função principal
int main()   {
     
     //Imprimindo a tela
     printf("Ola Mundo!");
     
     /* Pausando o programa eu posso ver o que aconteceu. Se eu não colocar 
     isto, ele irá executar e terminar sem que eu veja nada */
     system("PAUSE");
     
     /* Aprendemos sobre funções e seus retornos em breve, portanto, a inserção
     desse trecho se faz obrigatória */
     
     return 0;
     }
