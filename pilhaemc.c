#include <stdio.h>
#include <stdlib.h>
#define maxTAM 100

typedef struct {
  int item[maxTAM];
  int topo;
}tpilha;

void tpilha_inicia (tpilha *p) {
  p->topo = -1;
}

//verificar se a pilha ta vazia

int tpilha_vazia(tpilha *p){
  if(p->topo == -1){
    return 1;
  }else{
    return 0;
  }
}

//verificar se a pilha ta cheia
int tpilha_cheia(tpilha *p){
  if(p->topo == maxTAM -1){
    return 1;
  }else{
    return 0;
  }
}

void tpilha_insere(tpilha *p, int x){
  if(tpilha_cheia(p) == 1){
    printf("tá cheio caraio");
  }else {
    p -> topo++;
    p -> item[p -> topo] = x; 
  }
}

int tpilha_remove(tpilha *p){
  
  int aux; 
  if(tpilha_vazia(p) == 1){
    printf("pilha vazia");
  }else {
    aux = p->item[p -> topo];
    p->topo--;
    return aux;
  }
}

int main(){

  tpilha *p = (tpilha*)malloc(sizeof(tpilha));
  tpilha_inicia(p);

  tpilha_insere(p, 10);

  return 0;
}
