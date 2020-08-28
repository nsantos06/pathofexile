#include <stdio.h>
exercicio1 meio errado
int main(void) {
  int i,tam,aux;
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tam);

  int vetor[tam];
  for(i = 0; i< tam; i++){
    printf("Digite os numeros:");
    scanf("%d",&vetor[i]);
  }

  for(i = 0; i<tam; i++){
    if(vetor[i+1]> vetor[i]){
      aux = vetor[i];
      vetor[i] = vetor[i+1];
      vetor[i+1] = vetor[i];
      
    }
    printf("[%d]",vetor[i]);
    
  }


  return 0;
}
