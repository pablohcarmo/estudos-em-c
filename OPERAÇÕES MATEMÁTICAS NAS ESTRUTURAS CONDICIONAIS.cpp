#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int maior;
    int menor;
    
    printf("Idade do seu filho mais novo:\n");
    scanf("%d", &menor);
    //system("cls");
    
    printf("Idade do seu filho mais velho: \n");
    scanf("%d", &maior);
    //system("cls");
    
    if((maior-menor)<=5)
    printf("Ceder desconto\n");
    
    else
    printf("Nao e possivel ceder desconto\n");
         
         
         system("pause");
         return 0;
}
