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


exercicio 4
  #include <stdio.h>

int main(void) {
  int tam;
  int k,i; // variaveis do primeiro vetor
  int aux;
  printf("Digite o tamanho dos vetores:");
  scanf("%d",&tam);

  int vetorA[tam], vetorB[tam];

  for(i = 0; i<tam; i++){
    printf("Digite os numeros na posicao (%d):",i);
    scanf("%d",&vetorA[i]);
  }

  for(i = 0; i<tam; i++){
    for(k = i; k<tam; k++){
      if(vetorA[i] > vetorA[k]){
        aux = vetorA[i];
        vetorA[i] = vetorA[k];
        vetorA[k] = aux;
      }
    }
  }
  int aux2; 

   for(i = 0; i<tam; i++){
    printf("Digite os numeros na posicao (%d) no segundo vetor:",i);
    scanf("%d",&vetorB[i]);
  }
    for(i = 0; i<tam; i++){
    for(k = i; k<tam; k++){
      if(vetorB[i] > vetorB[k]){
        aux2 = vetorB[i];
        vetorB[i] = vetorB[k];
        vetorB[k] = aux2;
      }
    }
  }

  for( i = 0; i<tam; i++){
    printf("VetorA :{%d}\n",vetorA[i]);
}
  for( i = 0; i<tam; i++){
    printf("VetorB: (%d)\n",vetorB[i]);
  }

  return 0;
}
