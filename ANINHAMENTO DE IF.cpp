#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int media = 7;
    int mediaa = 4;
    float meedia = 3.9;
    float meediaa = 6.9;
    
    printf("Qual foi a sua media?\n");
    scanf("%d %f", &media, &mediaa, &meedia, &meediaa);

    if(media>=7)  
    printf("Voce foi aprovado. Parabens!\n\n");
   
    else ((mediaa>=4)&&(meedia<=6.9));
         ("Voce ficou de recuperacao. Estude!\n\n");
             
    if   ((mediaa==0)&&(meediaa<=3.9))
         ("Voce foi reprovado!\n\n");
 
         system("pause");
         return 0;

}
