    #include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto/*=0*/,
        cand1 = 0,
        cand2 = 0,
        branco = 0,
        nulo = 0;
     
     do{   
        //while(voto != -1){        
        system("cls");
        printf("Em qual canditado deseja votar?\nJose Paulo Barosa    - Digite 1\nMarcos Gomes Peixoto - Digite 2\nBranco               - Digite 0\n\nOpcao escolhida: ");
        scanf("%d", &voto);
        
        if(voto !=-1){
        if(voto==0){
        branco = branco + 1;
        }else if (voto==1){
              cand1 += 1;
        }else if (voto == 2){
              cand2 ++;
        }else{
              nulo++;
              }
        }
    }while(voto != -1);
    system("cls");
    printf("Jose Paulo Barbosa - %d votos\nMarcos Gomes Peixoto - %d votos\nVotos Brancos - %d\nTotal de Votos - %d votos\n",/*voto*/ cand1, cand2, branco, nulo, (cand1+cand2+branco+nulo));
    system("PAUSE");
    return 0;
    
}
