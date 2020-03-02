#include <stdio.h>
#include <stdlib.h>
int main(){
  int produto,qtd;
  float preco;

  printf("digite o codigo do produto:");
  scanf("%d",&produto);

  printf("digite a qtd do produto:");
  scanf("%d",&qtd);

  printf("digite o preço do produto:");
  scanf("%f",&preco);

  int vt = preco * qtd;

  

  if(qtd >0 && qtd <=10){
    printf("o valor total é %d \n",vt);
}

  else if(qtd >11 && qtd <=50){
  int desconto = 0.90 * vt;  
  printf("o valor total é %d \n",desconto);
}

  else if(qtd >50){
  int desconto1 = 0.80 * vt;
  printf("o valor total é de %d \n",desconto1);
  }

  return 0;
}

