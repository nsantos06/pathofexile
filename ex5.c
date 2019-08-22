#include <stdio.h>

int main(void) {
  float f;
  printf("digite o valor em fahrenheit: ");
  scanf("%f",&f);
  float c = (f - 32) * 5 / 9;
  printf("A conversao de fahrenheit pra celsius sera de: %f",c);
  return 0;
}
