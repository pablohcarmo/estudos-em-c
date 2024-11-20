#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define pi 3.14

int idade;
float altura;
char sexo;

int main() {
    #define curso 'S'
    int hora = 9, minuto = 28, segundo = 24;
        
    printf("Valor de PI: %0.2f\n\n", pi);
    printf("Data %s\nHora %s\n", __DATE__,__TIME__);
    idade = 16;
    altura = 1.79;
    sexo = 'M';
    
    printf("Ola, eu tenho %d, sou do sexo %c e tenho %0.2fm de altura!\n", idade, sexo, altura);
    printf("Estao gostando do curso? R= %c!\n\n", curso);
    
    printf("\nidade1 %d",idade); //Pertence ao 16 pois ainda está definido como global.
    idade =10;
    {
     printf("\nidade2 %d",idade); //Pertence ao 10 pois foi definido como variável local acima.
    }
    printf("\nidade3 %d",idade); //Pertence ao 10 também pois a variável é local.
    

    {
     int idade = 677;
     printf("\nidade4 %d",idade); //Pertence ao 677 pois é uma nova variável global.
    }

    {
     idade=20;
     printf("\nidade5 %d\n",idade); //Pertence ao 20 pois é uma variável local e foi definida acima.
    }
    printf("\nidade6 %d\n",idade); //Pertence ainda ao 677 pois a variável é global, definida acima do 20.
    
    
    system("PAUSE");
    return 0;
}
