#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b;
    float c;
    
    a = 2;
    printf("%d\n", a);
    a = pow(a, 2); //"a" elevado ao quadrado (a = 2)
    printf("%d\n", a);  
    a = pow(a, 6); //"a" elevado a sexta (a = 4)
    printf("%d\n\n", a);
    
    b = 81;
    printf("%d\n", b);
    b = sqrt(b); //Raiz quadrada de b, "b"=81
    printf("%d\n", b);
    b = 625; 
    b = pow(b, 0.25); //Raiz a quarta, ou 1/4
    printf("%d\n\n", b);
    
    c = 3.14;
    printf("%0.1f --- sem funcao: %0.0f --- ceil: %0.0f --- floor: %0.0f\n\n", c, c, ceil (c), floor (c));
    
    c =5.7;
    printf("%0.1f --- sem funcao: %0.0f --- ceil: %0.0f --- floor: %0.0f\n\n", c, c, ceil (c), floor (c));
    
    system("PAUSE");
    return 0;
    
}
