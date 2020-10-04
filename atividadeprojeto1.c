//atividade de projeto interdisciplinar 24-09-2020, dados nao homogeneos.

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define disciplinamax 100;

int main(void) {
  
  int disciplina,i;
  
  printf("Digite a quantidade de matérias a serem colocadas:");
  scanf("%d",&disciplina);

  char nmateria[disciplina];
  int testudantes[disciplina];
  int estudantesapp[disciplina];
  int estudantesrep[disciplina];

  for( i = 0; i< disciplina; i++){
    printf("\nDigite o nome da matéria:");
    scanf("%s",&nmateria[i]);

    printf("Coloque o numero total de estudantes:");
    scanf("%d",&testudantes[i]);

    printf("Digite o numero de estudantes aprovados:");
    scanf("%d",&estudantesapp[i]);

    printf("Digite o numero de estudantes reprovados:");
    scanf("%d",&estudantesrep[i]);
  }  

  int alunoscad = 0;
  for( i = 0; i<disciplina; i++){
    alunoscad += testudantes[i];
    
    printf("\nA materia [%s], \nTeve um numero total de estudantes:[%d], \nAlunos aprovados:[%d], \nAlunos reprovados:[%d]\n",&nmateria[i],testudantes[i],estudantesapp[i],estudantesrep[i]);
    
  
  }

  
  printf("\nTotal de alunos cadastrados:[%d]\n",alunoscad);

  for(i = 0; i<disciplina; i++){
    
    int porcentagemaprovados = (estudantesapp[i] * 1.0) / testudantes[i] * 100;

    
    
    printf("\nNa materia:[%s]:\nEstudantes Aprovados:[%d],\nTotal de estudantes:[%d],\nPorcentagem de aprovados:[%d]\n",&nmateria[i],estudantesapp[i],testudantes[i],porcentagemaprovados);
  }
  

  return 0;
}
