#include <stdio.h>
int main(void) {
  float ht,vh,pd;
  
  printf("Digite o valor de horas trabalhadas por mes: ");
  scanf("%f",&ht);
  printf("Digite o valor de hora trabalhada: ");
  scanf("%f",&vh);
  printf("Digite o percentual de desconto: ");
  scanf("%f",&pd);
  int sb = ht * vh;
  float td = (pd/100)*sb;  
  printf("As horas trabalhadas sao: %f \n",ht);
  printf("O Salario bruto é: %d \n",sb);
  printf("o total de desconto é: %f \n",td);
  float sl = sb - td;
  printf("O Salario liquido é:%f",sl);
  
  return 0;
}
