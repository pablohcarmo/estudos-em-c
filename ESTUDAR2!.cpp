// Este � um coment�rio de uma linha 

/* Este � um
 coment�rio
 de v�rias
  linhas */
 
 // Coment�rios n�o s�o compilados, ent�o, teoricamente, o programa n�o come�ou
 
 /* Indicando que utilizarei algumas bibliotecas da linguagem C 
 stdio.h -> biblioteca padr�o das fun��es de entrada e sa�da
 stdlib.h -> biblioteca que d� a possibilidade de v�rias fun��es, por�m vou
             utiliz�-la para interromper o programa com o system("PAUSE") */
             
#include <stdio.h> //H: HEADER (CABE�ALHO)
#include <stdlib.h>
 
 /* Este espa�o serviria para eu declarar v�rias vari�veis, fun��es, procedimentos... */
 
 // Agora sim o programa come�a! A fun��o main() � a fun��o principal
int main()   {
     
     //Imprimindo a tela
     printf("Ola Mundo!");
     
     /* Pausando o programa eu posso ver o que aconteceu. Se eu n�o colocar 
     isto, ele ir� executar e terminar sem que eu veja nada */
     system("PAUSE");
     
     /* Aprendemos sobre fun��es e seus retornos em breve, portanto, a inser��o
     desse trecho se faz obrigat�ria */
     
     return 0;
     }
