#include <stdio.h>
#include <math.h>

int main(void) {
  const float pi = 3.14159;
  printf("Digite o raio: \n");
  int raio = 0;
  scanf("%i",&raio);
  float area = pi * (raio * 2);
  printf("A area do circulo é : %f \n",area);
  return 0;
}
