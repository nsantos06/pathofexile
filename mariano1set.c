#include <stdio.h>

int main(void) {

  int n = 0; 
  int arr[10],i,digitos;

  printf("Digite a qtd de digitos:");
  scanf("%d",&digitos);

  for( i =0; i<digitos; i++){
    printf("Digite os numeros:");
    scanf("%d",&arr[i]);
  }

  for(i = digitos -1 ; i>=0 ; i--){
    n = arr[i];
    printf("[%d]",n);
  }

  return 0;
}
