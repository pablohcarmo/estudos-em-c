// TABELA DE NATAÇÃO, EXERCÍCIO 12-PUCRS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int idade;
    char sim[4];
    char nao[4];
    
    
    system("cls");
    system("color 8b");

    printf("Idade do seu filho: ");
    scanf("%d", &idade);

                if(idade<5)
                printf("\nSeu filho nao podera entrar na natacao!\n\n");
    
                if((idade>=5)&&(idade<=7))
                printf("\nEle(a) nadara na categoria: Infantil A\n\n");
    
                if((idade>7)&&(idade<=10))
                printf("\nEle(a) nadara na categoria: Infantil B\n\n");
    
                if((idade>=11)&&(idade<=13))
                printf("\nEle(a) nadara na categoria: Juvenil A\n\n");
   
                if((idade>13)&&(idade<=17))
                printf("\nEle(a) nadara na categoria: Juvenil B\n\n");

                if(idade>=18)
                printf("\nEle(a) nadara na categoria: Adulto\n\n");
    
    
    system("pause");
    return 0;
}
