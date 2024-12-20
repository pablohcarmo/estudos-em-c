//C�lculo de fatorial com fun��o recursiva 
#include <stdio.h> 
#include <conio.h> 
  
//prot�tipo da fun��o fatorial 
double fatorial(int n); 
  
int main(void) 
{ 
  int numero; 
  double f; 
  
  printf("Digite o numero que deseja calcular o fatorial: "); 
  scanf("%d",&numero); 
  
  //chamada da fun��o fatorial 
  f = fatorial(numero); 
  
  printf("Fatorial de %d = %.0lf",numero,f); 
  
  getch(); 
  return 0; 
} 
  
//Fun��o recursiva que calcula o fatorial 
//de um numero inteiro n 
double fatorial(int n) 
{ 
  
  double vfat; 
  
  if ( n <= 1 ) 
     //Caso base: fatorial de n <= 1 retorna 1 
     return (1); 
  else
  { 
     //Chamada recursiva 
     vfat = n * fatorial(n - 1); 
     return (vfat); 
  } 
}
