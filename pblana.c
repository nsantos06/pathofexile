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

#include <stdio.h>

int main(void) {
int a0,razao,n;
int cont,termo,sn;

printf("Digite a posição inicial,o intervalo, e a quantidade: \n");
scanf("%d %d %d",&a0,&razao,&n);
cont = 0;
while(cont<=n){
  termo = a0 + cont * razao;
  sn = razao * (a0 + n) / 2;
  if((sn - razao)/2 != razao){
    printf("São P.A e os termos são: %d \n",termo);
    cont++;
  }
  else{
    printf("Não é uma P.A");
    break;
  }

}
printf("\n");


  return 0;
}
/* Exercicio 4
*/


#include <stdio.h> 
#include <stdlib.h>

int main(){
  int k,j,n;
  for(k = 0; k<10; k++){
  printf("Digite 10 numeros:");
  scanf("%d",&n);
  j = n * n;
  if(n>0){
    printf("O quadrado do numero é: %d",j);
  }
  else if (n>0){
    printf("Numero invalido");
  }
  }



  return 0; 
}
