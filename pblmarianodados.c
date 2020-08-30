// EXERCICIO 1 COMPLETO
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

// EXERCICIO 2 COMPLETO
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

//EXERCICIO 4 FALTA METADE  
#include <stdio.h>

int main(void) {
  int tam,tam2; //tamanho dos vetores
  int k,i; // variaveis do primeiro vetor
  int aux;
  
  //pedindo o tamanho dos dois vetores
  printf("Digite o tamanho do primeiro vetor:");
  scanf("%d",&tam);

  printf("Digite o tamanho do segundo vetor:");
  scanf("%d",&tam2);

  int vetorA[tam], vetorB[tam2];

  //pedindo os numeros do primeiro vetor
  for(i = 0; i<tam; i++){
    printf("Digite os numeros na posicao (%d):",i);
    scanf("%d",&vetorA[i]);
  }
  
  // ordenando o primeiro vetor
  for(i = 0; i<tam; i++){
    for(k = i; k<tam2; k++){
      if(vetorA[i] > vetorA[k]){
        aux = vetorA[i];
        vetorA[i] = vetorA[k];
        vetorA[k] = aux;
      }
    }
  }
  int aux2; 
  
  //pedindo numeros no segundo vetor
   for(i = 0; i<tam2; i++){
    printf("Digite os numeros na posicao (%d) no segundo vetor:",i);
    scanf("%d",&vetorB[i]);
  }
    //ordenando o segundo vetor
    for(i = 0; i<tam; i++){
    for(k = i; k<tam2; k++){
      if(vetorB[i] > vetorB[k]){
        aux2 = vetorB[i];
        vetorB[i] = vetorB[k];
        vetorB[k] = aux2;
      }
    }
  }
  //imprimindo o primeiro vetor
  for( i = 0; i<tam; i++){
    printf("VetorA :{%d}\n",vetorA[i]);
} 
  // imprimindo o segundo vetor
  for( i = 0; i<tam2; i++){
    printf("VetorB: (%d)\n",vetorB[i]);
  }

  return 0;
}
