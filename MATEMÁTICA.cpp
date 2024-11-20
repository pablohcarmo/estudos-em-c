/*                          FUNÇÕES MATEMÁTICAS

----------> #include <math.h>


ORDEM:
1° - Funções
2° - Multiplicações e divisões
3° - Somas e subtrações

AGRUPAMENTO DE PARÊNTESES

1° - PARÊNTESES ---> ( )
2° - COLCHETES ---> [ ]
3° - CHAVES   ---> { }

Exemplos:
1+5*2-sqrt(9)/3
1+5*2-3/3
1+10-1
10

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                               CONVERSÃO DE TEMPERATURAS

Para convertermos a temperatura de graus Celsius (°C) para gruas Fahrenheit (°F), seguimos
essas operações:
      Temperatura em ºC multiplicado por 9
      -> Este resultado, dividido por 5
         ->Este resultado, somado com 32
Ou seja: C*9/5+32
Aplicando o agrupamento de parênteses: (((C*9)/5)+32)

Agora ao contrário, de Fahrenheit para Celsius:
      {[(F-32)/5]*9}
      {F*9[F/5(F-32)]}
      
      
      EXEMPLOS:
               
int a=3, b=4, c;
c=a+ pow(b,2); -> variável c será igual a 19
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char op;
    float c;
    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &c);
    c= c*9,
    c= c/5;
    c= c+32,
    printf("Temperatura em Fahrenheit: %0.2fF\n\n", c);
    
    system("PAUSE");
    system("CLS");
     
    float f;
    printf("Digite a temperatura em Fahrenheit: \n");
    scanf("%f", &f);
    f = ((f-32)*5)/9;
    printf("Temperatura em Celsius: %0.2fC\n\n", f);

    system("PAUSE");
    return 0;



   
    
}







