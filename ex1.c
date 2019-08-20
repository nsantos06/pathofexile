#include <stdio.h>
#include <math.h>
// calcular a area de um circulo 
int main(void) {
  const float pi = 3.14159;
  printf("Digite o raio: \n");
  float raio = 0;
  scanf("%f",&raio);
  float area = pi * (raio * raio);
  printf("A area do circulo é : %f \n",area);
  return 0;
}
