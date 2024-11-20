/*                      CONCATENA��O

O s�mbolo "+' � um operador. Note que, para sintaxe A+B ser v�lida, o operador "+"
deve estar definido para os tipos de operandos A e B, na linguagem espec�fica em que
estamos programando. 
Por exemplo, se A e B forem vari�veis de um tipo num�rico primitivo, a sem�ntica do
operador "+" seria "concatenar as duas strings A e B, gerando uma outra string como
"resultado".
Portanto, apesar de utilizar-se o mesmo s�mbolo "+", o significado da opera��o 
depende do tipo de operando. E, para alguns tipos de operando, determinado operador
da linguagem pode simplesmente n�o estar definido. � o que ocorre com as linguagens
C/C++, por exemplo: o operador (bin�rio) "+" n�o est� definido para arrays dos 
caracteres (char[]).
*/






#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char horas[] = "13";
    char minutos[] = "47";
    
    strcat(horas, ":");
    
    //printf("str1 depois de strcat(str1, \":\"):\n%s", str1);
    
    strcat(horas, minutos);
    
    printf("\Sao(horas, minutos):\n%s\n", horas);
    
    system("PAUSE");
    return 0;
}







#include <iostream>
#include <string>

    
    std::string str1 = "12";
    std::string str2 = "30";
    std::string hora;
    
    hora = str1 + : + str2;
    
    std::cout << hora << std::endl;
    
    system("PAUSE");
    return 0;
}

