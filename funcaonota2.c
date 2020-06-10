//o programa pede 4 notas ao usuario e calcula sua media baseada em classificacoes
// utiliza funcao, e as Classificacoes sao:
// Entre 0 e 4.9 = D
// Entre 5 e 6.9 = C
// Entre 7 e 8.9 = B
// Entre 9 e 10 = A


#include <stdio.h>

float mediadenotas(float nota1, float nota2)
{
    float n1,n2,n3,n4,media;
    printf("Digite a primeira nota:");
    scanf("%f",&n1);
    
    printf("Digite a segunda nota:");
    scanf("%f",&n2);
    
    printf("Digite a terceira nota:");
    scanf("%f",&n3);
    
    printf("Digite a quarta nota:");
    scanf("%f",&n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
    if(media > 0 && media <= 4.9){
      printf("O Aluno teve classificacao D \n");
    }
    else if(media > 5 && media <= 6.9){
      printf("O Aluno teve classificacao C \n");
    }
    else if(media > 7 && media <= 8.9){
      printf("O Aluno teve classificacao B \n");
    }
      else if(media > 9 && media <= 10){
      printf("O Aluno teve classificacao A \n");
    }
    
    return media;
}



int main(void) {
  float nota1,nota2;
  float variavel;

  variavel = mediadenotas(nota1,nota2);
  printf("O resultado é:[%.2f] ",variavel);

  return 0;
}
