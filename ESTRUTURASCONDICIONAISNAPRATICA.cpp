#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b, c;
    int opcao;

        printf("Digite a opcao e pressione <enter>:\n\n1 - Classificar triangulo por lados\n2 - Classificar triangulo por angulos\n\n Opcao escolhida: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
        printf("Digite o lado A do triangulo: ");
        scanf("%f", &a);
        printf("Digite o lado B do triangulo: ");
        scanf("%f", &b);
        printf("Digite o lado C do triangulo: ");
        scanf("%f", &c);
        if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
        if((a==b)&&(b==c)){
        printf("Triangulo Equilatero\n");
        }else if((a==b)||(b==c)||(a==c)){
        printf("Triangulo Isoceles\n");
        }else{
        printf("Triangulo Escaleno\n");
        }
        }else{
         printf("Triangulo impossivel de ser criado\n");
        }
        break;

        case 2:
        printf("Digite o angulo A do triangulo: ");
        scanf("%f", &a);
        printf("Digite o angulo B do triangulo: ");
        scanf("%f", &b);
        printf("Digite o angulo C do triangulo: ");
        scanf("%f", &c);
        if((a+b+c)==180){
        if((a<90)&&(b<90)&&(c<90)){
        printf("Triangulo Acutangulo\n");
        }else if((a==90)||(b==90)||(c==90)) {
        printf("Triangulo Retangulo\n");
        }else{
         printf("Triangulo Obtusangulo\n");
        }
        }else{
              printf("Triangulo impossivel de ser criado\n");
        }       
        break;

  default: printf("Opcao desconhecida\n\n"); break;
}

           system("pause");
           return 0;

}
