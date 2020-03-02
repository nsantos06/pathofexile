#include <stdio.h>

int main(void) {
 int n,contador;
  printf("fala um numero:");
  scanf("%d",&n);

 for(contador = 2; contador <=10; contador ++){
   printf("%d * %d = %d \n",n,contador,n*contador);
 }
  
  return 0;
}


