#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int   idades   [5];
    char  nomes    [5][50],
          sobrenome[5][50];
    float alturas  [5],
          notas    [5];
 
          system("CLS");
          system("color 8B");

          printf(" (1/5)\n\nDigite o nome do aluno:\n");
          scanf("%[A-Z a-z]s\n\n", &nomes[0]);
          printf("\nDigite a idade do aluno:\n");
          scanf("%d", &idades[0]);
          printf("\nDigite a altura do aluno:\n"); 
          scanf("%f", &alturas[0]);
          printf("\nDigite a nota do aluno:\n");
          scanf("%f", &notas[0]);
          
          system("PAUSE");
          system("CLS");
          fflush(stdin);

          printf(" (2/5)\n\nDigite o nome do aluno:\n");
          scanf("%[A-Z a-z]s", &nomes[1]);
          printf("\nDigite a idade do aluno:\n");
          scanf("%d", &idades[1]);
          printf("\nDigite a altura do aluno:\n");
          scanf("%f", &alturas[1]);
          printf("\nDigite a nota do aluno:\n");
          scanf("%f", &notas[1]);
              
          system("PAUSE");
          system("CLS");
          fflush(stdin);

          printf(" (3/5)\n\nDigite o nome do aluno:\n");
          scanf("%[A-Z a-z]s", &nomes[2]);
          printf("\nDigite a idade do aluno:\n");
          scanf("%d", &idades[2]);
          printf("\nDigite a altura do aluno:\n");
          scanf("%f", &alturas[2]);
          printf("\nDigite a nota do aluno:\n");
          scanf("%f", &notas[2]);

          system("PAUSE");
          system("CLS");
          fflush(stdin);

          printf(" (4/5)\n\nDigite o nome do aluno:\n");
          scanf("%[A-Z a-z]s\n\n", &nomes[3]);
          printf("\nDigite a idade do aluno:\n");
          scanf("%d", &idades[3]);
          printf("\nDigite a altura do aluno:\n");
          scanf("%f", &alturas[3]);
          printf("\nDigite a nota do aluno:\n");
          scanf("%f", &notas[3]);

          system("PAUSE");
          system("CLS");
          fflush(stdin);

          printf(" (5/5)\n\nDigite o nome do aluno:\n");
          scanf("%[A-Z a-z]s", &nomes[4]);
          printf("\nDigite a idade do aluno:\n");
          scanf("%d", &idades[4]);
          printf("\nDigite a altura do aluno:\n");
          scanf("%f", &alturas[4]);
          printf("\nDigite a nota do aluno:\n");
          scanf("%f", &notas[4]);

          system("PAUSE");
          system("CLS");
          fflush(stdin);

          puts("                  DADOS:");



          puts("___________________________________________");
          puts("                ALUNO (1/5) ");          

          printf("-Nome: %s \n", nomes[0]);
          printf("-Idade: %d anos\n", idades[0]);
          printf("-Altura: %.2fm\n", alturas[0]);
          printf("-Nota: %2.2f\n", notas[0]);
          {
          if((notas[0]>=7.0)||(idades[0]>=18)||(alturas[0]>=1.65))
          printf("\nEntrada Autorizada!\n");
          else
          printf("\nEntrada nao Autorizada!\n");
          }

          puts("___________________________________________");
          puts("                ALUNO (2/5) ");          
          printf("-Nome: %s \n", nomes[1]);
          printf("-Idade: %d anos\n", idades[1]);
          printf("-Altura: %.2fm\n", alturas[1]);
          printf("-Nota: %2.2f\n", notas[1]);
          {
          if((notas[1]>=7.0)||(idades[1]>=18)||(alturas[1]>=1.65))
          printf("\nEntrada Autorizada!\n");
          else
          printf("\nEntrada nao Autorizada!\n");
          }

          puts("___________________________________________");
          puts("                ALUNO (3/5) ");
          printf("-Nome: %s \n", nomes[2]);
          printf("-Idade: %d anos\n", idades[2]);
          printf("-Altura: %.2fm\n", alturas[2]);
          printf("-Nota: %2.2f\n", notas[2]);
          {
          if((notas[2]>=7.0)||(idades[2]>=18)||(alturas[2]>=1.65))
          printf("\nEntrada Autorizada!\n");
          else
          printf("\nEntrada nao Autorizada!\n");
          }

          puts("___________________________________________");
          puts("                ALUNO (4/5) ");          
          printf("-Nome: %s \n", nomes[3]);
          printf("-Idade: %d anos\n", idades[3]);
          printf("-Altura: %.2fm\n", alturas[3]);          
          printf("-Nota: %2.2f\n", notas[3]);
          {
          if((notas[3]>=7.0)||(idades[3]>=18)||(alturas[3]>=1.65))
          printf("\nEntrada Autorizada!\n");
          else
          printf("\nEntrada nao Autorizada!\n");
          }

          puts("___________________________________________");
          puts("                ALUNO (5/5) ");          
          printf("-Nome: %s \n", nomes[4]);
          printf("-Idade: %d anos\n", idades[4]);
          printf("-Altura: %.2fm\n", alturas[4]);          
          printf("-Nota: %2.2f\n", notas[4]);
          {
          if((notas[4]>=7.0)||(idades[4]>=18)||(alturas[4]>=1.65))
          printf("\nEntrada Autorizada!\n");
          else
          printf("\nEntrada nao Autorizada!\n");
          }          
          puts("___________________________________________");          

          printf("\n\n\n");
          printf("Pablo Henrique de Souza Carmo\nJovem Aprendiz - TIM Celular S.A\nData:%s\nHora:%s\n",__DATE__,__TIME__);


          printf("\n\n\n\n");
          system("PAUSE");
          return 0;

}
