#include <stdio.h>
/* Exercicio 3
*/
int main(void) {
  int k,carteira;
  float vmulta,multa;
  float soma = 0; float soma2 = 0;

  for(k = 0; k<2; k++){
    printf("Digite o Numero da carteira de motorista:");
    scanf("%d",&carteira);

    printf("Digite quantas multas:");
    scanf("%f",&multa);

    printf("Digite o valor da multa:");
    scanf("%f",&vmulta);

    soma = multa * vmulta;
    printf("O valor das multas são %.2f \n",soma);

    soma2 += soma;
    printf("Todas as multas somadas são: %.2f \n",soma2);

  }



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
