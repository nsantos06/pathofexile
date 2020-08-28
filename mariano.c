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

exercicio2 - meio errado
#include <stdio.h>

int main(void) {
  int i,tam,aux,aux2;
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tam);

  int vetor[tam],arr[tam];
  for(i = 0; i< tam; ++i){
    printf("Digite os numeros:");
    scanf("%d",&vetor[i]);
    aux = vetor[i];
  }

  for(i = 0; i<tam; ++i){
    printf("Digite os numeros no segundo vetor:");
    scanf("%d",&arr[i]);
    aux2 = arr[i];
  }

  if(aux == aux2){
      printf("Sao iguais!");
    }else{
      printf("Sao diferentes!");
    }

  return 0;
}
