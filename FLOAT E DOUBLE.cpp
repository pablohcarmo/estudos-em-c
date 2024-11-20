#include <stdlib.h>
#include <stdio.h>

int main()
{
    float pi = 3.14;
    double piDouble = 3.1415926535897932384626433832795;
    
    
    /*printf("Valor de pi %f\n", pi );
    printf("Valor de pi mais preciso %f\n", piDouble );
    */

    printf("Valor de pi %.5f\n", pi );
    printf("Valor de pi mais preciso %.7f\n", piDouble );

    
    system("PAUSE");
    return 0;

}
