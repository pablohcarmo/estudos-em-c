//Cálculo da Equação do Segundo Grau
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float a,b,c,d,i,real; //Declaração de variaveis
    char op;	
    do{

        system("CLS");
        system("COLOR 8B");
    printf("Este programa calcula as raizes da equacÆo do segundo grau\n");
    printf("\n\tA*x^2 + B*x + C = 0 \t\n");
    printf("Entre com o valor de a:\n");
    scanf("%f",&a);
    while(a==0)
    {
        printf("ERRO! Entre com o valor diferente de zero:\n");
        scanf("%f",&a);
    }    
        printf("Entre com o valor do coeficiente de x:\n");
        scanf("%f",&b);
        printf("Entre com o termo independente:\n");
        scanf("%f",&c);
        d=((b*b)-4*(a*c));
        printf("Delta:%.2f\n",d);
        if(d==0)
           printf("As raizes sÆo X1=X2=%.2f",(-b/2*a));
        else
        {
          if(d>0)
             printf("As raizes sÆo X1=%.2f\nX2=%.2f\n",((-b/2*a)+sqrt(d)/(2*a)),((-b/2*a)-sqrt(d)/(2*a)));
             else
               if(d<0)
               {
                   d=-d;
                   real=-b/2*a;
                   i=(sqrt(d)/2*a);
               printf("As raizes complexas sÆo  x1= %.2f + %.3fi\nx2= %.2f - %.3fi", real, i, real, i);
               }              
        }
        printf("\n\nOutro C lculo (S)/(N): ");
        scanf("%s",&op);
        }while(op=='s'||op=='S');    
         printf("\nPablo Henrique de Souza Carmo\nI.T. - TIM Santo Andr‚\nProduzido em: %s …s %s\n\n", __DATE__,__TIME__);

       system("PAUSE");
}
