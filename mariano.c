#include <stdio.h>

int main(void) {
  int tamanho;
  
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tamanho);
  
  int vetor[tamanho];
  
  int i,j;

  for(i=0; i<tamanho; i++){
    printf("Digite o elemento:[%d]:",i);
    scanf("%d",&vetor[i]);
  }
  
  for(i = 0; i< tamanho; i++){
    for( j = i + 1; j<tamanho; j++){
      if(vetor[i] == vetor[j]){
        printf("O elemento na posicao %d aparece na posicao %d",i,j);
      }
    }
  }
  return 0;
}
