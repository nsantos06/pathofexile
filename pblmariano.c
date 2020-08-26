#include <stdio.h>

int main(void) {
  int i,n,k;
  int aux = 0;
  printf("Digite o tamanho do vetor:");
  scanf("%d",&n);

  int vetor[100],vetor1[100];

  for(i = 0; i<n; i++){
    printf("Digite os numeros no primeiro vetor:");
    scanf("%d",&vetor[i]);
  }

  for(i = 0; i<n; i++){
    printf("Digite os numeros no segundo vetor:");
    scanf("%d",&vetor1[i]);
  }

for( i = 0; i<n; i++){
  printf("Posicao:[%d] Primero vetor:[%d] Segundo Vetor:[%d]\n",i,vetor[i],vetor1[i]);
}

  return 0;
}
