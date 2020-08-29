#include <stdio.h>

int main(void) {
  
  int i,aux,k; // dois contadores (i,k), variavel auxiliar
  int tam; // tamanho do array
  
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tam);

  int vetor[tam];
  for(i = 0; i<tam; ++i){
    printf("Digite os numeros na posicao {%d}:",i+1);
    scanf("%d",&vetor[i]);
  }

  for(i = 0; i<tam ; ++i){
    for(k = 0; k<tam; ++k){
      if(vetor[k+1]> vetor[k]){
      aux = vetor[k-1];
      vetor[k-1] = vetor[k];
      vetor[k] = aux;
    }
    }
    
  }

for(i =0; i<tam; ++i){
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
