#include <stdio.h>

int main(void) {
  int voto,cont=0;
  printf("Escreva algum numero diferente de zero pra iniciar o programa:");
  scanf("%d",&voto);
  
  
  while(voto !=0){
    printf("digite o voto:");
    scanf("%d",&voto);
    switch(voto){
      case 1:
        cont++;
        printf("Votou 1 \n");
        cont += voto;
      break;
      case 2:
        cont++;
        printf("Votou 2 \n");
      break;
      case 3:
        cont++;
        printf("Votou 3 \n");
      break;
      case 4:
        cont++;
        printf("Votou 4 \n");
      break;
      case 5:
        cont++;
        printf("Votou Nulo \n");
      break;
      case 6:
        cont++;
        printf("Votou Branco \n");
      break;
    default:
      printf("Programa encerrado! \n ");
    break;
    }
    
  }
  printf("%d",cont);
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
