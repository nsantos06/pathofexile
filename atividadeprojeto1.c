#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define disciplinamax 100;

int soma(int c, int *vetor) {
	int j; 
	int k = 0;
	
	for (j = 0; j < c; ++j) {
		k += vetor[j];
	}

	return k;
}



int main(void) {
  
  int disciplina,i;
  
  printf("Digite a quantidade de matérias a serem colocadas:");
  scanf("%d",&disciplina);

  char nmateria[disciplina][50];
  int testudantes[disciplina];
  int estudantesapp[disciplina];
  int estudantesrep[disciplina];

  for( i = 0; i< disciplina; i++){
    printf("\nDigite o nome da matéria:");
    scanf("%s",nmateria[i]);

    printf("Coloque o numero total de estudantes:");
    scanf("%d",&testudantes[i]);

    printf("Digite o numero de estudantes aprovados:");
    scanf("%d",&estudantesapp[i]);

    printf("Digite o numero de estudantes reprovados:");
    scanf("%d",&estudantesrep[i]);
  }  

  //este for relacionando a matéria, a quantidade de alunos aprovados, reprovados e cadastrados
  for( i = 0; i<disciplina; i++){
    printf("\nSobre a matéria [%s] tem as informacoes de que:",nmateria[i]);

    printf("\nO total de alunos é de:[%d]",testudantes[i]);
    printf("\nO total de alunos aprovados é de:[%d]",estudantesapp[i]);
    printf("\nO total de alunos reprovados é de:[%d]",estudantesrep[i]);
  }
  
  //usando a funcao declarada acima, aqui vai ser o total de alunos, aprovados, reprovados e cadastrados.
  int alunoscadastrados = soma(disciplina,testudantes);
  int alunosaprovados = soma(disciplina,estudantesapp);
  int alunosreprovados = soma(disciplina,estudantesrep);

  printf("\n\n Tem as seguintes informacoes da faculdade: ");
		
    printf("\nO total de aluno(s) cadastrados(s) na faculdade: [%d]", alunoscadastrados);
		
    printf("\nA porcentagem de aluno(s) aprovado(s) na faculdade: [%d%%]", alunosaprovados * 100 / alunoscadastrados);
		
    printf("\nA porcentagem reprovado(s) por frequência na faculdade: [%d%%]", alunosreprovados * 100 / alunoscadastrados);


  return 0;
}
