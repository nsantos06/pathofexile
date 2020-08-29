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
      if(vetor[k-1]> vetor[k]){
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
  int i,tam;
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tam);

  int vetor[tam],vetor2[tam];
  for(i = 0; i< tam; ++i){
    printf("Digite os numeros na posicao {%d}:",i);
    scanf("%d",&vetor[i]);
  }

  for(i = 0; i<tam; ++i){
    printf("Digite os numeros no segundo vetor na posicao {%d}:",i);
    scanf("%d",&vetor2[i]);
  }

  for(i=0;i<tam; ++i){
    printf("\nPosicao{%d}: Vetor1:[%d] Vetor2:[%d]\n",i,vetor[i],vetor2[i]);
  }
  return 0;
}

