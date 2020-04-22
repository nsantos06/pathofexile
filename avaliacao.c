#include <stdio.h>

int main(void) {
 int votos,vt;
 int n,i,contvotos=0;
 
printf("Quantas vezes vai votar?:");
scanf("%d",&i);

printf("Digite em quem quer votar (1,2,3 ou 4):");
scanf("%d",&votos);

 
 for(n = 0; n<i; n++){
  switch(votos){
    case 1:
    printf("Você votou no candidato 1 \n");
    break;
   
    case 2:
    printf("Você votou no candidato 2 \n");
    break;
   
    case 3:
    printf("Você votou no candidato 3 \n");
    break;
   
    case 4:
    printf("Você votou no candidato 4 \n");
    break;

    default:
    printf("Valor invalido");
  
 }
 
 }
printf("%d \n",n);
  return 0;
}


#include <stdio.h>

int main(void) {
  int i,base,exp;
  
  printf("Digite a base:");
  scanf("%d",&base);
  int nresult = base;
  printf("Digite o expoente:");
  scanf("%d",&exp);

  for(i = 1; i<exp; i++){
    nresult = nresult * base;

  }
  printf("%d",nresult);
  return 0;
}
