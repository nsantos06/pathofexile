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

//EXERCICIO 4  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define tamMAX [100]; 

int pegarString(char *vetor, char *tipo) {

int c;
int v = 0;

for (c = 0; c < strlen(vetor); ++c) {
  if (tipo == "letter") {
    if (!isalpha(vetor[c])) {
      if(!isspace(vetor[c])) {
        ++v;
      }
    }
  }

if (tipo == "number") {
  if (isalpha(vetor[c])) {
      if(vetor[c] != ',') {
        ++v;
      }
    }
  }
}
if (v > 0){
  return 0;
}else{
  return 1;
}

}

void ordenar(int *vetor, int size) {
int aux;
int i, c;
for (i = 1; i < size; ++i) {
 for (c = 1; c < size; ++c) {
    if (vetor[c-1] > vetor[c]) {
      aux = vetor[c-1];
      vetor[c-1] = vetor[c];
      vetor[c] = aux;
    }
  }
  }
}


void removerelementos(int * vector, int sizeVector) {
  int i, c, k;
for(i = 0; i < sizeVector; i++) {
  for(c = i + 1; c < sizeVector; c++) {
    if(vector[c] == vector[i]) {
      for (k = c; k < sizeVector-1; k++) {
        vector[k] = vector[k+1];
      }
      sizeVector--;
      }
    }
  }
}

int main(void) {

char tamMinEle[100]; // entrada de quantidade minima de elementos
printf("Digite o tamanho do vetor A:");
scanf("%s", tamMinEle);

while (pegarString(tamMinEle, "number") != 1 || atoi(tamMinEle) < 0 ||
atoi(tamMinEle) > 100) {
  
  printf("Digite o tamanho do vetor A:");
  scanf("%s", tamMinEle);

}
int tamMinA = atoi(tamMinEle); // converção de string para int do sizeMIN

printf("Digite o tamanho do vetor B:" );
scanf("%s", tamMinEle);

while (pegarString(tamMinEle, "number") != 1 || atoi(tamMinEle) < 0 ||
atoi(tamMinEle) > 100) {
  
  printf("Digite o tamanho do vetor B:");
  scanf("%s", tamMinEle);

}
int tamMinB = atoi(tamMinEle); // converção de string para int do sizeMIN

char entradaElemento[100]; // variavel que vai guarda a entrada do elemento
int vectorA[tamMinA], vectorB[tamMinB]; // vetores
int i, c, k, s = 0; // contadores

  for (i = 0; i < tamMinA; ++i) {
    printf("Coloque os elementos no indice A{%d}:", i);
    scanf("%s", entradaElemento);
 
 while (pegarString(entradaElemento, "number") != 1) {
    printf("Coloque os elementos no indice A{%d}:", i);
    scanf("%s", entradaElemento);
  }
  vectorA[i] = atoi(entradaElemento);
}
 
 for (i = 0; i < tamMinB; ++i) {
    printf("Coloque os elementos no indice B{%d}:", i);
    scanf("%s", entradaElemento);
 
 while (pegarString(entradaElemento, "number") != 1 ) {
  
    printf("Coloque os elementos no indice {B-%d}: ", i);
    scanf("%s", entradaElemento);
  }
  
  vectorB[i] = atoi(entradaElemento);
}

int aux; // variavel auxiliar para ordenar o vetor

ordenar(vectorA, tamMinA);
ordenar(vectorB, tamMinB);

int tamMinC = (tamMinA+tamMinB); // variavel que armazena o tamanho do vetor C,
//no caso o tamanho é A+B=C
int vectorC[tamMinC]; // vetor C

for (i = 0; i < tamMinA; ++i) {
 vectorC[i] = vectorA[i];
 ++s;
}
for (i = 0; i < tamMinB; ++i) { // adicionar na posição correta
 vectorC[s] = vectorB[i];
 ++s;
}

for(i = 0; i < tamMinC; i++) {
  for(c = i + 1; c < tamMinC; c++) {
    if(vectorC[c] == vectorC[i]) {
      for (k = c; k < tamMinC-1; k++) {
        vectorC[k] = vectorC[k+1];
      }
    tamMinC--;
    }
  }
}

removerelementos(vectorC, tamMinC);
ordenar(vectorC, tamMinC);

 printf("\n Vetor A:");
 for (i = 0; i < tamMinA; ++i) {
    printf("[%d] ", vectorA[i]);
 }
 printf("\n Vetor B:");
 
 for (i = 0; i < tamMinB; ++i) {
    printf("{%d} ", vectorB[i]);
 }
 printf("\n Vetor C:");
 
 for (i = 0; i < tamMinC; ++i) {
    printf("(%d) ", vectorC[i]);
 }
 return 0;
}
