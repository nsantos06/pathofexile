#include <stdio.h>

int main(void) {
  int nota1,nota2,media;

  printf("Digite a primeira nota : \n ");
  scanf("%d",&nota1);
  printf("Digite a segunda nota : \n ");
  scanf("%d",&nota2);
  media = (nota1 + nota2) / 2 ;
  if(media <= 4) media = 1;
  if(media > 4.1 && media <= 7) media = 2;
  if(media > 7.1 && media <= 10 ) media = 3;
  switch(media){
    case 1:
    printf("Reprovado");
    break;
    
    case 2:
    printf("Exame");
    break;
    
    case 3:
    printf("Aprovado");
    break;
    
    default:
    printf("error");
    break;

  }
  return 0;
}
