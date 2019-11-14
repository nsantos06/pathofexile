#include <stdio.h>

int main(void) {
  int x;
  printf("Escolhe um numero:");
  scanf("%d",&x);
  printf("%d \n",x);
  while(x<=100){
    x = x*3;
    printf("%d \n",x);
   
 
  }
return 0;
}
