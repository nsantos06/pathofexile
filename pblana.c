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
#include <stdbool.h>
int main(void) {

printf("Digite Qnts vezes vc quer repetir:");
int rep,j,k;
scanf("%d",&rep);
int guardar[100] = {};
int soma = 0;
for(k = 0; k<rep; k++){
  printf("Escolhe os numeros da sequencia:");
  scanf("%d",&j);
  guardar[k] = j;
  soma = guardar[k] - guardar[k-1];
}

for( k = 0; k<rep; k++){
  printf("[%d] \n",guardar[k]);
}
int dif = guardar[k+1] - guardar[k];
if(soma == dif){
  printf("é pa");
}else printf("não é pa");


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
