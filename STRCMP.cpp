#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  int main() {   
      char s1[100],s2[100]; gets(s1); gets(s2);   
      
      if (strcmp(s1,s2)==0)     
      printf("igual\n");   
      
      else if (strcmp(s1,s2)<0)     
      printf("s1 menor que s2\n");   
      
      else    
      printf("s1 maior que s2\n");   
     
      system("pause");
      return 0;
      
} 
