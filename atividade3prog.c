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

//atividade 2
#include <stdio.h>

int main(void) {
  char cidades[100][100];
  float dados[4][0];
  int i,k,j;
  
  printf("Digite a quantidade de cidades:");
  scanf("%d",&k);

  for(i = 0; i < k; i++){
    printf("Digite o nome das cidade: \n");
    scanf("%s",cidades[i]);
  }
  
  for(i = 0; i<k; i++){
    printf("Digite quantos graus na cidade de %s: \n",cidades[i]);
    scanf("%f",dados[i]);
}
  for(i = 0; i<k; i++){
    printf("Digite a umidade na cidade de %s: \n",cidades[i]);
    scanf("%f",dados[i]);
}

  for(i = 0; i<k; i++){
    printf("Digite o vento em km/h na cidade de %s: \n",cidades[i]);
    scanf("%f",dados[i]);
}


  return 0;
}


















//atividade 6
#include <stdio.h>

int main(void) {
  int linha,coluna,n,m,i;
  int nulo = 0;
  
  printf("Digite a quantidade de linha:");
  scanf("%d",&n);

  printf("Digite a quantidade de coluna:");
  scanf("%d",&m);

  int matriz[n][m];

  for(linha = 0; linha<n; linha++){
    for(coluna = 0; coluna < m; coluna++){
      printf("Digite os elementos da posicao [%d] [%d]: ",linha,coluna);
      scanf("%d",&matriz[linha][coluna]); 
    }
  }
  
  for(linha = 0; linha<n; linha++){
    for(coluna = 0; coluna<m; coluna++){
       if(matriz[linha][coluna] == 0){
         nulo++;
       }
    }
  }
  printf("A quantidade de numeros nulos é:[%d] ",nulo);
  



  return 0;
}
