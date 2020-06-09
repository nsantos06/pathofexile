// atividade1
#include <stdio.h>

int main(void) {
  int k,i;
  int soma = 0;
  
  printf("digite a qtd de elementos no vetor:");
  scanf("%d",&k);

  int vetor[k];

  for(i = 0; i<k; i++){
    printf("Digite os numeros no vetor:");
    scanf("%d",&vetor[i]);
  }
  
  for(i = 0; i<k; i++){
    soma = soma + vetor[i];
    printf("[%d] ", soma);
  }

  return 0;
}





















#include <stdio.h>

int main(void) {
  int linha,coluna,numero,i;
  

  printf("Digite quantos numeros:");
  scanf("%d",&numero);

  int matriz[numero][numero];
  for(linha = 0; linha<numero; ++linha){
    for(coluna = 0; coluna<numero; ++coluna){
      printf("Digite os numeros na posicao [%d] [%d]:",linha,coluna);
      scanf("%d",&matriz[linha][coluna]);
    }
  }
    
  for(linha = 0; linha<numero; linha++){
    for(coluna = 0; coluna< numero; coluna++){
      printf("\n %d",matriz[linha][coluna]);
    }
  }

  return 0;
}
