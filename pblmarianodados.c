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
#define sizeMAX [100]; // quantidade máxima de elementos
/* getString(vetor, type);
Ex: getString(vetor, letter) -- vai checar se existe algo que não seja letra na string
Ex: getString(vetor, number) -- vai checar se existe algo que não seja numeros na string
*/
int getString(char *vetor, char *type) {
int c;
int v = 0;
for (c = 0; c < strlen(vetor); ++c) {
if (type == "letter") {
if (!isalpha(vetor[c])) {
if(!isspace(vetor[c])) {
++v;
}
}
}
if (type == "number") {
if (isalpha(vetor[c])) {
if(vetor[c] != ',') {
++v;
}
}
}
}
if (v > 0)
return 0;
else
return 1;
}
// inputOrder(vetor, size);
void inputOrder(int *vetor, int size) {
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
// input removeRepeatedElement(vetor, size);
void removeRepeatedElement(int * vector, int sizeVector) {
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

char sizeMINEnter[100]; // entrada de quantidade minima de elementos
printf("Enter the number of elements to be added in vector A, with a maximum of 100 elements  \n Number of elements:");
scanf("%s", sizeMINEnter);

while (getString(sizeMINEnter, "number") != 1 || atoi(sizeMINEnter) < 0 ||
atoi(sizeMINEnter) > 100) {
  printf("Enter the number of elements to be added in vector A, with a maximum of 100 elements. \n Number of elements: ");
  scanf("%s", sizeMINEnter);
}
int sizeMINA = atoi(sizeMINEnter); // converção de string para int do sizeMIN

printf("Enter the number of elements to be added in vector B, with a maximum of 100 elements. \n" );
scanf("%s", sizeMINEnter);

while (getString(sizeMINEnter, "number") != 1 || atoi(sizeMINEnter) < 0 ||
atoi(sizeMINEnter) > 100) {
  printf("Enter the number of elements to be added in vector B, with a maximum of 100 elements. \n Number of elements");
  scanf("%s", sizeMINEnter);
}
int sizeMINB = atoi(sizeMINEnter); // converção de string para int do sizeMIN

char elementEnter[100]; // variavel que vai guarda a entrada do elemento
int vectorA[sizeMINA], vectorB[sizeMINB]; // vetores
int i, c, k, s = 0; // contadores

  for (i = 0; i < sizeMINA; ++i) {
    printf("Enter the element of the index [A-%d]: ", i);
    scanf("%s", elementEnter);
 while (getString(elementEnter, "number") != 1) {
    printf("Enter the element of the index [A-%d]: ", i);
    scanf("%s", elementEnter);
  }
  vectorA[i] = atoi(elementEnter);
}
 
 for (i = 0; i < sizeMINB; ++i) {
  printf("Enter the element of the index [B-%d]: ", i);
  scanf("%s", elementEnter);
 while (getString(elementEnter, "number") != 1 ) {
  printf("Enter the element of the index [B-%d]: ", i);
  scanf("%s", elementEnter);
  }
  vectorB[i] = atoi(elementEnter);
}

int aux; // variavel auxiliar para ordenar o vetor

inputOrder(vectorA, sizeMINA);
inputOrder(vectorB, sizeMINB);

int sizeMINC = (sizeMINA+sizeMINB); // variavel que armazena o tamanho do vetor C,
//no caso o tamanho é A+B=C
int vectorC[sizeMINC]; // vetor C

for (i = 0; i < sizeMINA; ++i) {
 vectorC[i] = vectorA[i];
 ++s;
}
for (i = 0; i < sizeMINB; ++i) { // adicionar na posição correta
 vectorC[s] = vectorB[i];
 ++s;
}
for(i = 0; i < sizeMINC; i++) {
  for(c = i + 1; c < sizeMINC; c++) {
    if(vectorC[c] == vectorC[i]) {
      for (k = c; k < sizeMINC-1; k++) {
        vectorC[k] = vectorC[k+1];
 }
  sizeMINC--;
 }
 }
}

removeRepeatedElement(vectorC, sizeMINC);
inputOrder(vectorC, sizeMINC);

 printf("\n A ");
 for (i = 0; i < sizeMINA; ++i) {
 printf("[%d] ", vectorA[i]);
 }
 printf("\n B ");
 for (i = 0; i < sizeMINB; ++i) {
 printf("[%d] ", vectorB[i]);
 }
 printf("\n C ");
 for (i = 0; i < sizeMINC; ++i) {
 printf("[%d] ", vectorC[i]);
 }
 return 0;
}
