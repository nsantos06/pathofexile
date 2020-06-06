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
