/*Primeiro declaramos uma variável, e inicializamos ela com o valor inicial, que é 1.
Logo em seguida ,fazemos com que o while dê um printf, mostrando o valor dessa variável
 ENQUANTO ela for MENOR ou IGUAL a 10.
Após imprimir o número 10, a variável é incrementada e passa a ter valor 11.
Como 11 não é menor ou igual a 10, o laço recebe valor lógico FALSE e termina sua 
execução.
*/




#include <stdio.h>
#include <stdlib.h>

int main(void)
{                   
        int numero=1;
        while(numero <= 10)
        {
            printf("%d\n", numero);
            numero++;
        }

        system("PAUSE");
        return 0;
}



/*                      VOID

void significa nulo, ou seja, a função não tem retorno, nada impede que vc faça uma função
int ou float sem ter retorno, porém vai fazer o compilador procurar um retorno desnecessariamente.

                       EXEMPLOS:

int funcao(int a, int b)//o primeiro int é o retorno, os demais argumentos da função 
return a + b; 
}

Ao ler esta função o retorno sera a soma, como foi indicado um return (retorno) e vc no retorno
int colocar void vai dar erro.
Uma função void geralmente é usado para organizar o programa, ao inves de no program principal main você fazer: 

main{

blablabla

}

você pode fazer:
     
void funçãoQualquer() {
     blablabla

}

                      E NO MAIN
                      
main{
     FUNÇÃO QUALQUER();
     
}     
     
void função(); ou void função (void); da no mesmo, pois() é uma função sem argumento e (void) também.



