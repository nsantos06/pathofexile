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


#include <stdio.h>

int main(void) {
  
  int i,aux=0,k; // dois contadores (i,k), variavel auxiliar
  int tam;
  int flag = 0; //gambiarra
  
  //tamanho do array
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tam);
  
  //pedindo os numeros do primeiro vetor
  int vetor1[tam],vetor2[tam];
  for(i = 0; i<tam; ++i){
    printf("Digite os numeros na posicao do VetorA{%d}:",i+1);
    scanf("%d",&vetor1[i]);
  }
  
  //pedindo os numeros do segundo vetor
  for(i = 0; i<tam; ++i){
    printf("Digite os numeros na posicao do VetorB{%d}:",i+1);
    scanf("%d",&vetor2[i]);
  }
  
  //ordenando o primeiro vetor
  for(i = 1; i<tam ; ++i){
    for(k = 1; k<tam; ++k){
      if(vetor1[k-1]> vetor1[k]){
      aux = vetor1[k-1];
      vetor1[k-1] = vetor1[k];
      vetor1[k] = aux;
     }
   }
  }

//ordenando o segundo vetor
for(i = 1; i<tam ; ++i){
    for(k = 1; k<tam; ++k){
      if(vetor2[k-1] > vetor2[k]){
      aux = vetor2[k-1];
      vetor2[k-1] = vetor2[k];
      vetor2[k] = aux;
     }
  }
}

for( i = 0; i<tam; i++){
  if(vetor1[i] == vetor2[i]){
    flag = 1;
  }else{
    flag = 0;
  }
}
if(flag == 1){
  printf("Vetores Iguais!");
}else{
  printf("Vetores Diferentes!");
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
