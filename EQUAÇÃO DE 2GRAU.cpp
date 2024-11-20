#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, c;
    printf("Digite os tres valores, separados por espacos:");
    scanf("%d %d %d, &a, &b, &c");
    printf("Equaçao do segundo grau: %dx²+%dx+%d=0", a, b, c);
    
    system ("PAUSE");
    return 0;
}
