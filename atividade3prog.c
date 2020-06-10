// atividade1
#include <stdio.h>

int main(void) {
  int k,i;
  int soma = 0;
  
  printf("Digite a quantidade de elementos no vetor:");
  scanf("%d",&k);

  int vetor[k];

  for(i = 0; i<k; i++){
    printf("Digite os numeros no vetor:");
    scanf("%d",&vetor[i]);
  }
  
  for(i = 0; i<k; i++){
    soma = soma + vetor[i];
    printf("\nO vetor T vai ter o numero: [%d] no indice: [%d]", soma,i);
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



//atividade 5
#include <stdio.h>

int main(void) {
  int n,k,indice;
  int apagar;

  printf("Digite o tamanho do vetor:");
  scanf("%d",&n);

  printf("Digite o indice que queira retirar: ");
  scanf("%d",&indice);

  int vetor[n];
  if(indice >=0 && indice < n-1){
    for(k = 0; k<n; k++){
    printf("Digite os numeros do vetor:");
    scanf("%d",&vetor[k]);
  }

  for(k=indice ; k<n; k++){
    vetor[k] = vetor[k+1];
  }
  for(k = 0; k<n-1; k++){
    printf("[%d] ",vetor[k]);
  }
    
  }
  else printf("Digite um indice valido!");
  
  return 0;
}

//atividade 6
#include <stdio.h>

int main(void) {
  int linha,coluna,n,m,i;
  int nulo = 0;
  int nulo2 = 0; int linhanulo = 0;
  
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
       if(nulo > nulo2){
         nulo2 = nulo;
         linhanulo = linha;
       }
    }
  }
  
  
  printf("A Linha com maior quantidade de nulos é a [%d]\n",linhanulo);
  printf("A quantidade de numeros nulos é:[%d] ",nulo);
  



  return 0;
}
