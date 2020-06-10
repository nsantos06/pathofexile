//uma funcao que pede duas notas ao usuario e calcula a media entre elas.

#include <stdio.h>

float mediadenotas(float nota1, float nota2)
{
    float k,j,media;
    printf("Digite as notas:");
    scanf("%f",&k);
    
    printf("Digite a segunda nota:");
    scanf("%f",&j);

    media = (k + j) / 2;
    return media;
}



int main(void) {
  float nota1,nota2;
  float variavel;

  variavel = mediadenotas(nota1,nota2);
  printf("O resultado é [%.2f] ",variavel);

  return 0;
}
