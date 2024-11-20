#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade;
    int resp;
    char sim[4];

    


   system("cls");
   system("color 8B");

    puts("Qual a sua idade?");
    scanf("%d", &idade);

     if(idade>=18){
                 puts("Entrada autorizada! Ebbbbaaaaa");
                 //FECHAR PROGRAMA, POIS O USUÁRIO TEM +18 ANOS

     }else if(idade<18)
      {        
                 do {
                 puts("Voce tem um responsavel?  (S/N)");
                 scanf("%s", &sim);
                 //COMO O USUÁRIO TEM -18 ANOS, PERGUNTAR A ELE SE TEM ALGUM RESPONSÁVEL
                 }while (  ( strcmp(sim, "s") != 0 ) &&
                           ( strcmp(sim, "S") != 0 ) &&
                           ( strcmp(sim, "n") != 0 ) &&
                           ( strcmp(sim, "Sim") != 0 ) &&
                           ( strcmp(sim, "SIM") != 0 ) &&
                           ( strcmp(sim, "sim") != 0 ) &&
                           ( strcmp(sim, "N") != 0 )
                           );
                 
                   if (    ( strcmp(sim, "s") == 0 ) ||
                           ( strcmp(sim, "S") == 0 ) ||
                           ( strcmp(sim, "n") == 0 ) ||
                           ( strcmp(sim, "N") == 0 ) 
                       )
                    {
                      puts("Qual a idade dele?");
                      scanf("%d", &resp);    
                      
                       if(resp<18){
                          puts("Entrada nao autozirada!");
                       }else{
                          puts("Entrada autozirada! Ebbbbaaaaa");
                       }
                                                        
                   }else{
                         puts("Entrada nao autozirada!");
                         }
                   
      }
                   system("PAUSE");
                   return 0;
}
