#include <stdio.h>
#include <stdlib.h>

typedef struct grafo Grafo;

//estrutura do grafo
struct grafo{
  int eh_ponderado;
  int nro_vertices;
  int grau_max;
  int** arestas;
  float** pesos;
  int* grau;
};

Grafo *gr;

//funcao
Grafo *cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado){
  int i;
  Grafo *gr =(Grafo*) malloc(sizeof(struct grafo));

  if(gr != NULL){
    //ponteiros
    gr -> nro_vertices = nro_vertices;
    gr -> grau_max = grau_max;
    gr -> eh_ponderado = (eh_ponderado != 0)?1:0;

    gr -> grau = (int*)calloc(nro_vertices,sizeof (int*));
    gr -> arestas = (int**)malloc(nro_vertices*sizeof(int*));

    for( i = 0; i<nro_vertices; i++){
      gr -> arestas[i] = (int*)malloc(grau_max*sizeof(int));
      if(gr -> eh_ponderado){
        gr -> pesos = (float**)malloc(nro_vertices*sizeof(float*));
      }
    }

  }
  
  
  return 0;
}

int main(void) {
  return 0;
}
