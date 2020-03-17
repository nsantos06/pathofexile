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

int main(void) {
  int a0,r,n;
  int contador,termo,sn;
  printf("Digite o numero(ponto de começo), a razao(intervalo), e n(qtd de elementos): \n");
  scanf("%d %d %d",&a0,&r,&n);
  
  contador = 0;
  
  while(contador<n){
  termo = a0 + contador * r;
  sn = r * (a0 + n) / 2;
  if(a0 == (a0 -1) + r){
     printf("É uma PA,Os termos são: %d \n",termo);
     contador++;
  }
  else{
    printf("Não é uma PA");
    break;
  } 
   
  
  
  }
  
  printf("\n");
  return 0;
}
