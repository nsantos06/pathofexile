#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int k,r,linhas,colunas;
  int cont = 0;

  printf("Linhas:");
  scanf("%d",&linhas);

  printf("colunas:");
  scanf("%d",&colunas);
  
  int matriz[linhas][colunas] = {}; 
  
  for(k=0; k<linhas; k++){
    for(r=0; r<colunas; r++){
      printf("Elementos na linha %d e coluna %d:",k+1, r+1);
      scanf("%d",&matriz[k][r]);
    }
    printf("\n");
  }

 for(k=0; k<linhas; k++){
    for(r=0; r<colunas; r++){
      if(matriz[k][r] < 0 || matriz[k][r] > 100){
        cont++;
      }
    }
 }
  printf("\n Valores fora do intervalo [0,100] na linha %d = %d",k+1,cont);
cont=0;
  return 0;
}
