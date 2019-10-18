#include <stdio.h>

int main(void) {
  int meses;
  printf("Digite o numero do respectivo mes: ");
  scanf("%d",&meses);
  switch(meses){
    case 1:
    printf("Janeiro, Alta Temporada");
    break;
    case 2:
    printf("Fevereiro,Alta Temporada");
    break;
    case 3:
    printf("Marco,Baixo Temporada");
    break;
    case 4:
    printf("Abril,Baixo Temporada");
    break;
    case 5:
    printf("Maio,Baixo Temporada");
    break;
    case 6:
    printf("Junho,Alta Temporada");
    break;
    case 7:
    printf("Julho,Alta Temporada");
    break;
    case 8:
    printf("Agosto,Baixa Temporada");
    break;
    case 9:
    printf("Setembro,Baixa Temporada");
    break;
    case 10:
    printf("Outubro,Baixa Temporada");
    break;
    case 11:
    printf("Novembro,Baixa Temporada");
    break;
    case 12:
    printf("Dezembro,Alta Temporada");
    break;
    default:
    printf("Digite um numero valido:");
    break;
}
  return 0;
}
