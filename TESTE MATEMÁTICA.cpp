#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, c, e;
    float d;
    
    a= 3;
    printf("%d\n", a);
    a= a+3;
    printf("%d\n", a);
    a+= 3; //Também posso utilizar: -= *= /=
    printf("%d\n\n", a);
    
    b= 4,
    printf("%d\n\n", b);
    b++; //Incrementa b em 1          
    printf("%d\n", b);
    b--; //Decrementa b em 1
    printf("%d\n\n", b);
    
    d = 56.78;
    c = d;
    printf("%0.2f -> %d\n\n", d, c);
    
    printf("Digite um número de ponto flutuante: ");
    scanf("%d", &e);
    printf("Como ele e apresentado em numero inteiro %d\n\n", e);
    
    system("PAUSE");
    return 0;
    
}
