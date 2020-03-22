#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float tcont,media;
  int n,qtd,type,total=0,soma=0,cont=0;
 
  
  printf("Digite o Id do consumidor:\n");
  scanf("%d",&n);

  printf("Digite a qtd em kWh: \n");
  scanf("%d",&qtd);

  printf("Digite o tipo 1 residencial, 2 comercial, 3 industrial:\n");
  scanf("%d",&type);

  switch(type){
    do{
    case 1:{
    cont++;
    tcont = qtd * 0.3;
    printf("O Id do consumidor é:%d \n e o tipo de consumidor:%d \n e de preço: R$%2.f \n",n,type,tcont);
    soma += tcont;
    break;}

    case 2:{
    cont++;
    tcont = qtd * 0.5;
    printf("O Id do consumidor é:%d \n e tipo de consumidor:%d \n e de preço: R$%2.f \n",n,type,tcont);
    soma += tcont;
    break;}

    case 3:{
    cont++;
    tcont = qtd * 0.7;
    printf("O Id do consumidor é :%d e \n tipo de consumidor:%d \n e de preço: R$%2.f \n",n,type,tcont);
    break;}

    default:{
      printf("Digite ou 1 ou 2 pra contar as medias");
    }
    }while(type == 0);
  {
  total += tcont;
  printf("Digite o Id do consumidor: \n");
  scanf("%d",&n);
  printf("Digite a qtd: \n");
  scanf("%d",&qtd);
  printf("digite o tipo de consumidor 1 res 2 comercial: \n");
  scanf("%d",&type);
  

  media = soma/cont;
  printf("Total de consumo é de: %d kWh \n", total);
  printf("Media de consumidor 1 e 2: %3.f \n",media);
}
}
  
  return 0;
}
