#include <stdio.h>
int main(void) {
  int c ;
  printf("Digite quantos graus vc quer converter em celsius para fahrenheit: ");
  scanf("%d",&c);
  int f = (9 * c + 160) / 5;
  printf("A conversao de celsius para fahrenheit será de:%d \n",f);
  return 0;
}
