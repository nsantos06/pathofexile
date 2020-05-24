#include <stdio.h>

int main(void) {
int cidades,linha,coluna,cont;

printf("Digite a qtd de cidades:");
scanf("%d",&cidades);

char nomecidade[cidades];
for(linha = 0; linha<cidades; linha++){
  printf("Digite o nome das cidade[%d]:",linha);
  scanf("%s",&nomecidade[linha]);
}
int distancia [cidades][cidades];
for(linha = 0; linha<cidades; linha++){
  for(coluna = 0; coluna<cidades; coluna++){
    if(linha != coluna && coluna > linha){
      printf("Digite a distancia da cidade:[%d][%d]:",linha,coluna);
      scanf("%d",&distancia[linha][coluna]);
}
    else if(linha > coluna){
      distancia[linha][coluna] = distancia[coluna][linha];
    }
    else if(linha == coluna){
      distancia[linha][coluna] = 0;
    }
  }
}
  printf("  ");
  for(cont = 0; cont<cidades; cont++){
    printf("%c ",nomecidade[cont]);
  }

for(linha = 0; linha<cidades;linha++){
  printf("\n %c ",nomecidade[linha]);
  for(coluna = 0; coluna<cidades;coluna++){
    printf("%d ", distancia[linha][coluna]);
  }
}
printf("\n----LetraB-----\n");
char cidade1[2],cidade2[2],contb;
int validacao1,validacao2;

printf("Nome da primeira cidade:");
scanf("%s",cidade1);
printf("Nome da segunda cidade:");
scanf("%s",cidade2);

validacao1 = 0; validacao2 = 0;

for(linha = 0; linha<cidades; linha++){
  if(cidade1[0] == nomecidade[linha]){
    validacao1 = linha;
  }
  if(cidade2[0] == nomecidade[linha]){
    validacao2 = linha;
  }
}
int diferenca[validacao1][validacao2];
printf("%d",diferenca[validacao1][validacao2]);


  return 0;
}
