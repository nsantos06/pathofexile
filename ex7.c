#include <stdio.h>

int main(void) {
  float combustivel = 12;
  int tg,vm;
  printf("Digite o tempo gasto na viagem (em horas):");
  scanf("%d",&tg);
  printf("Digite a velocidade média da viagem:");
  scanf("%d",&vm);
  int km = tg * vm;
  int litros = km / combustivel;
  printf("O percurso foi de :%d km,Voce gastou %d litros de combustivel, o tempo gasto na viagem foi %d horas ,e a velocidade media na viagem foi %d km's",km,litros,tg,vm);

  return 0;
}
