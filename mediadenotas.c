#include <stdio.h>

int main(void) {
  int i,k,notas;

  printf("Digite a qtd de notas: ");
  scanf("%d",&k);

  float array[k];
  float soma = 0;
  for( i = 0; i < k ; i++){
    printf("Digite as notas:");
    scanf("%f",&array[i]);
    soma += array[i];
  }
  float media = soma/k;
  
 printf("A media é:[%2.f]",media);
  return 0;
}
