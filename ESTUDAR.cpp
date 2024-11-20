#include <stdio.h>  STANDART INPUT/OUTPUT (PRINTF/PUTS) 
#include <stdlib.h> BIBLIOTECA C
                 |-> H: HEADER (CABEÇALHO)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

";" PONTO-E-VÍRGILA: QUBRA DE CÓDIGO, FIM DELE

"{ }" CHAVES : DELIMITAR UM BLOCO DE CÓDIGO, PODEMOS ANINHAR O CÓDIGO ENTRE AS CHAVES
EXEMPLO:
        
        {-------------------
        ---- CÓDIGO --------
        --------------------
} <- FIM DO CÓDIGO

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

IDENTAÇÃO:  ESPAÇAMENTO PARA DIZER QUE O CÓDIGO PERTENCE À LINHA ACIMA (HIERARQUIA)

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FUNÇÃO DE SAÍDA: "printf" -> Imprime texto formatado na tela (inclui: variáveis, vetores, operações matemáticas)
                 PRINT:IMPRIMIR - F:FORMATADO
                 EXEMPLO: WORLD HELLO WORLD...
ESTRUTURA: printf("texto",[parâmetros],...);
                            
                 "puts"   -> Imprime um texto em cada linha (imprime apenas textos)
                 PUT: COLOCAR   - STRING:TEXTO
                 EXEMPLO: HELLO WORLD
                          HELLO WORLD
                          HELLO WORLD...
ESTRUTURA: puts("texto");

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

"\n": desce uma linha no meio do texto 
N: NEW LINE

-CÓDIGOS: TEXTOS QUE NÃO SERÃO COMPILADOS
COMENTÁRIOS: textos no meio do código que não serão lidos (textos para informação, informação,...)
ESTRUTURA: //(COMENTÁRIO...)
           /*(ESCREVE O COMENTÁRIO EM VÁRIAS LINHAS
           */ <- FIM DO COMENTÁRIO
           
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
