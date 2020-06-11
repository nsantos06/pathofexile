#include <stdio.h>
#include <string.h>
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
    if(s1[k] == s2[i])
    {
      printf("[%c] = [%c]\n",s1[k],s2[i]);
      if(i == 1)
      {
        contador++;
      }
      i++;
    }
    else
    {
      i = 0;
    }
  }
  
  return 0;
}
