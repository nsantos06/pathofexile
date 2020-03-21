#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void) {
  float tcont,media;
  int n,qtd,type,total=0,soma=0,cont=0;
  clrscr();
  
  printf("digite o numero:");
  scanf("%d",&n);

  printf("digite a qtd:");
  scanf("%d",&qtd);

  printf("digite o tipo 1 res, 2 comercial, 3 inds");
  scanf("%d",&type);

  switch(type){
    do{
      case 1:{
      cont++;
      tcont = qtd * 0.3;
      printf("o tipo de consumidor: %d e de %2.f",n,tcont);
      soma += tcont;
      break;}

      case 2:{
      cont++;
      tcont = qtd * 0.5;
      printf("o tipo de consumidor %d e de %2.f",n,tcont);
      soma += tcont;
      break;}

      case 3:{
      cont++;
      tcont = qtd * 0.7;
      printf("o tipo de consumidor %d e de %2.f",n,tcont);
      break;}
    }while(type == 0);
  }
  total += tcont;
  printf("digite o numero:");
  scanf("%d",&n);
  printf("digite a qtd:");
  scanf("%d",&qtd);



    }




  }
  
  return 0;
}
