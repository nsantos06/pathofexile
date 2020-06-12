#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
  int k, contador = 0, i = 0;
  char maior,menor;
  char s1[100];
  char s2[100];

  printf("Digite a primeira string:");
  scanf("\n%[^\n]",s1);
  
  printf("Digite a segunda string:");
  scanf("\n%[^\n]",s2);
  


  int k1 = strlen(s1);
  int k2 = strlen(s2);
  
  for(k = 0; k<k1; k++)
  {
   
    if(toupper(s1[k]) == toupper(s2[i])){
      
      if(i == (k2-1)){
        contador++;
      }
      i++;
    }
   else{
        i = 0;
      }
    
  }
  printf("contador :[%d]\n",contador);
  
  return 0;
}
