#include <stdio.h>  STANDART INPUT/OUTPUT (PRINTF/PUTS) 
#include <stdlib.h> BIBLIOTECA C
                 |-> H: HEADER (CABE�ALHO)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

";" PONTO-E-V�RGILA: QUBRA DE C�DIGO, FIM DELE

"{ }" CHAVES : DELIMITAR UM BLOCO DE C�DIGO, PODEMOS ANINHAR O C�DIGO ENTRE AS CHAVES
EXEMPLO:
        
        {-------------------
        ---- C�DIGO --------
        --------------------
} <- FIM DO C�DIGO

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

IDENTA��O:  ESPA�AMENTO PARA DIZER QUE O C�DIGO PERTENCE � LINHA ACIMA (HIERARQUIA)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FUN��O DE SA�DA: "printf" -> Imprime texto formatado na tela (inclui: vari�veis, vetores, opera��es matem�ticas)
                 PRINT:IMPRIMIR - F:FORMATADO
                 EXEMPLO: WORLD HELLO WORLD...
ESTRUTURA: printf("texto",[par�metros],...);
                            
                 "puts"   -> Imprime um texto em cada linha (imprime apenas textos)
                 PUT: COLOCAR   - STRING:TEXTO
                 EXEMPLO: HELLO WORLD
                          HELLO WORLD
                          HELLO WORLD...
ESTRUTURA: puts("texto");

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

"\n": desce uma linha no meio do texto 
N: NEW LINE

-C�DIGOS: TEXTOS QUE N�O SER�O COMPILADOS
COMENT�RIOS: textos no meio do c�digo que n�o ser�o lidos (textos para informa��o, informa��o,...)
ESTRUTURA: //(COMENT�RIO...)
           /*(ESCREVE O COMENT�RIO EM V�RIAS LINHAS
           */ <- FIM DO COMENT�RIO
           
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
