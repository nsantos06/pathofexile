#include <stdio.h>
/* Exercicio 3
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int c,carteira,nmulta,mcarteira,mnmult;
  float valor,total,totalgeral;
  mnmult = 0;
  totalgeral = 0;
  printf("Digite a carteira do motorista ou 0 pra finalizar: \n");
  scanf("%d",&carteira);
  while(carteira != 0){
    total = 0;
    printf("Escreva o numero de multas: \n");
    scanf("%d",&nmulta);
    for(c = 1; c <= nmulta; c++){
      printf("Digita o Valor da multa: \n");
      scanf("%f",&valor);
      total += valor;
    }if(nmulta > mnmult){
      mnmult = nmulta;
      mcarteira = carteira;
      }
      printf("Carteira de motorista %d: \n ",carteira);
      printf("Valor a pagar %f \n",total);
      printf("Digite a carteira ou 0 pra acabar o programa: \n");
      scanf("%d",&carteira);
      totalgeral += total;
}
printf("Numero da carteira com maior numero é %d \n",mcarteira);
printf("Valor total arrecadado %3.f R$: \n",totalgeral);

return 0;
}
/* Exercicio 5
*/
#include <stdio.h>

int main(){
  int K, razao;
  int a = 1;
  printf("Digite qnt vezes vai repetir:");
  scanf("%i", &K);
  int Vetor[K];
  for(int i = 0; i < K; i++){
     printf("Digite os numeros:");
     scanf("%i", &Vetor[i]);
  }
  razao = Vetor[1] - Vetor[0];
  for(int i = 2; i < K; i++){
    if(Vetor[i] != Vetor[0] + (i*razao)){
      a = 0;
    }
  }
  if(a == 1) printf("Eh PA\n");
  else printf("Nao eh PA\n");
  return 0;
}
/* Exercicio 4
*/


#include <stdio.h>

int main(void) {
  int k,n,j=1;
  for(k=0;k<10;k++){
    printf("Digite 10 numeros:");
    scanf("%d",&n);
    j = n* n;
    if(n>0){
      printf("O quadrado do numero é: %d \n",j);
    }
    else if (n<0){
      printf("O numero não vai ser contado \n");
    }
  }
  return 0;
}
