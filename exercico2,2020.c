#include <stdio.h>

int main(void) {
  int n,preco,qtd,codigo,k;

  printf("qnts vezes quer repetir:");
  scanf("%d",&n);
  for(k = 0; k<n; k++)
  {
  printf("digite o codigo do produto:");
  scanf("%d",&codigo);
  
  printf("digite a qntd:");
  scanf("%d",&qtd);

  printf("digite o preco:");
  scanf("%d",&preco);

  int vt = preco * qtd;
   
   if(qtd >0 && qtd<=10){
    printf("o codigo do produto é:%d o preco é:%d e o valor total é: %d \n",codigo,preco,vt);
  }

  else if(qtd >11 && qtd <=50){
    int desconto = 0.10 * vt;
    printf("o codigo do produto é:%d o preco é:%d e o valor total é: %d \n",codigo,preco,vt);
  }
 
  else if (qtd>50){
    int desconto1 = 0.20 * vt;
    printf("o codigo do produto é:%d o preco é:%d e o valor total é: %d \n",codigo,preco,vt);
  }
  
  
  
  }
  
  return 0;
}
