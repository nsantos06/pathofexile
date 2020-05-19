#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
exercicio 2
int main(){

int linhas,colunas,k,r;
int cont=0;

printf("Linhas: ");
scanf("%d",&linhas);

printf("\nColunas: ");
scanf("%d",&colunas);

int matriz[linhas][colunas];
for(k = 0; k<linhas; k++){
  for(r=0 ; r<colunas;r++){
  printf("Informe o numero a ser armazenado na linha %d coluna %d: ", k+1,r+1);
  scanf("%d", &matriz[k][r]);
}
printf("\n");
}
for(k = 0; k<linhas;k++){
  for(r=0;r<colunas;r++){
  if(matriz[k][r] < 0 || matriz[k][r] > 100){
    cont++;
}
}
printf("\nValores fora do intervalo [0,100] na linha %d = %d", k+1 , cont);
cont = 0;

}
return 0;
}


