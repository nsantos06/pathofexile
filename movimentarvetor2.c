O outro programa movimenta pra frente, esse pra trás

#include <stdio.h>

int main(void) {
  int n,i,pos,num;
  printf("Digite o tamanho do array:");
  scanf("%d",&n);

  int array[n];

  printf("Digite o novo elemento:");
  scanf("%d",&num);

  printf("Digite a nova posicao:");
  scanf("%d",&pos);

  for(i = 0; i<n; i++){
    printf("Elemento [%d]:",i);
    scanf("%d",&array[i]);
  }

  for(i = n; i>= pos; i--){
    array[i-1] = array[i];
  }
  array[pos-1] = num;

  for(i = 0 ; i<n; i++){
    printf("Posicao:[%d] = Elemento:[%d] \n",i,array[i]);
  }


  return 0;
}
