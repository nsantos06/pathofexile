#include <stdio.h>

int main(void) {
  int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulos = 0, brancos = 0, voto;

  printf("Entre com uma sequência de votos terminada pelo número 0\n");
  voto = 1;

  while(voto != 0){
    scanf("%d", &voto);
    switch(voto){
        case 1:
          candidato1++;
        break;
        case 2:
          candidato2++;
        break;
        case 3:
          candidato3++;
        break;
        case 4:
          candidato4++;
        break;
        case 5:
          nulos++;
        break;
        case 6:
          brancos++;
        break;
      default:
      printf("Programa encerrado! \n");
      break;  
      
    }
  }
  float total = candidato1 + candidato2 + candidato3 + candidato4 + nulos + brancos;
  printf("Candidato 1:%d \n",candidato1);
  printf("Candidato 2:%d \n",candidato2);
  printf("Candidato 3:%d \n",candidato3);
  printf("Candidato 4:%d \n",candidato4);
  printf("Nulos:%d \n",nulos);
  printf("Brancos:%d \n",brancos);
  printf("Total de: %.2f Porcento \n",(brancos/total)*100);
  return 0;
}
#include <stdio.h>

int main(void) {
  float i,base,exp;
  int cont = 0;
 
  printf("Digite a base:");
  scanf("%f",&base);
 
  float nresult = base;
 
  printf("Digite o expoente:");
  scanf("%f",&exp);

  if(exp<0){
    exp = -1 * exp;
    cont = 1;
  } 
for(i = 1; i<exp; i++){
    nresult = nresult * base;
}
if(cont == 1){
  printf("%f",1/nresult);
}else printf("%f",nresult);

  return 0;
}
