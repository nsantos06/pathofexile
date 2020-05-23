#include <stdio.h>

int main(void) {
int cidades,k,i;

printf("Digite a qtd de cidades:");
scanf("%d",&cidades);

char nomecidade[cidades];
for(k = 0; k<cidades; k++){
  printf("Digite o nome das cidade[%d]:",k);
  scanf("%s",&nomecidade[k]);
}
int distancia [] = {};
for(k = 0; k<cidades; k++){
  for(i = 0; i<cidades; i++){
    printf("Digite a distancia da cidade:[%d][%d]:",k,i);
    scanf("%d",&distancia[k]);
  }
}



  return 0;
}
