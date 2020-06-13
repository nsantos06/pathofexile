#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
  int k, contador = 0, i = 0;
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




//atividade 4 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int funcaostring(char *s1, char *s2){
  int k, contador = 0, i = 0;
  int k1 = strlen(s1);
  int k2 = strlen(s2);

  for(k = 0; k<k1; k++)
  {
   
    if(toupper(s1[k]) == toupper(s2[i])){
      printf("%c = %c \n",s1[k],s2[i]);
      if(i == (k2-1)){
        contador = (k - (k2-1));
        printf("%d == %d[%d]\n",i,(k2-1),k2);
        printf("contador: [%d]\n",contador);
        return contador;
        
        break;
      }
      i++;
    }
   else{
        i = 0;
      }
    
  }

  return -1;
}




int main(void) {
  int k, contador = 0, i = 0;
  char s1[100];
  char s2[100];

  printf("Digite a primeira string:");
  scanf("\n%[^\n]",s1);
  
  printf("Digite a segunda string:");
  scanf("\n%[^\n]",s2);

  int k1 = strlen(s1);
  int k2 = strlen(s2);
  
  if(funcaostring(s1,s2) != -1){
    printf("localizado na posicao %d",funcaostring(s1,s2));
  }
  else{
    printf("nao localizado");
  }
  return 0;
}


