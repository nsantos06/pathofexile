#include <stdio.h>

int main(void) {
  const float pi = 3.14159;
  float raio,altura;
  printf("Digite o raio da lata:");
  scanf("%f",&raio);
  printf("Digite a altura da lata:");
  scanf("%f",&altura);
  float volume = pi * (raio * raio) * altura;
  printf("o volume da lata sera de: %f cm³",volume);
  return 0;
}
