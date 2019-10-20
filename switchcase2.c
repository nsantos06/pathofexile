#include <stdio.h>

int main(void) {
  int nota1,nota2,media;
  printf("Digite a primeira nota : \n ");
  scanf("%d",&nota1);
  printf("Digite a segunda nota : \n ");
  scanf("%d",&nota2);
  media = (nota1 + nota2) / 2 ;
  switch(media){
    case 1:
    if(media <= 4){ 
    printf("Reprovado");}
    break;
    
    case 2:
    if(media > 4.1 && media <= 7){ 
    printf("Exame");}
    break;
    
    case 3:
    if(media > 7.1 && media <= 10 ){
    printf("Aprovado");}
    break;
    
    default:
    printf("error");
    break;

  }
  return 0;
}
