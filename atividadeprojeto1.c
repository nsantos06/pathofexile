#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


// aqui uma funcao que ela soma todos os elementos de um vetor, e depois guarda esses valores.
int soma(int c, int *vetor) {
	int j; 
	int k = 0;
	
	for (j = 0; j < c; ++j) {
		k += vetor[j];
	}

	return k;
}



int main(void) {
  
  int disciplina,i; // quantidade de disciplinas e um contador.
  
  printf("Digite a quantidade de matérias a serem colocadas:");
  scanf("%d",&disciplina);

  char nmateria[disciplina][50]; // variavel para o nome da materia
  int testudantes[disciplina]; // variavel para o total de estudantes
  int estudantesapp[disciplina]; // variavel para estudantes aprovados
  int estudantesrep[disciplina]; // variavel para estudantes reprovados

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


int Palunosaprovados = (alunosaprovados * 1.0 / alunoscadastrados) * 100;
int alunos10 = (((alunosaprovados - 10)* 1.0 / alunoscadastrados * 100));


for( i = 0; i<disciplina; i++){
    int porcentagemaprovados = (estudantesapp[i] * 1.0 / testudantes[i]) * 100;

    if(alunos10 > porcentagemaprovados){
      
      printf("\n A materia:[%s] teve a porcentagem menor de que:[%d%%] do total de alunos aprovados na faculdade, sendo essa porcentagem de:[%d%%]",nmateria[i],alunos10,porcentagemaprovados);
      
    }
}

  return 0;
}


Exercicio 2, Letra A


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

#define qtdalunos 2
#define materia 3




void ordemVetor(int *vetor, int tamanho) {
	int auxiliar; 
	int i, c;
	
	for (i = 1; i < tamanho; ++i) { 
	   for (c = 1; c < tamanho; ++c) {
	      if (vetor[c-1] > vetor[c]) {
          auxiliar = vetor[c-1];
          vetor[c-1] = vetor[c];
          vetor[c] = auxiliar;
	      }
	   }
	}
	
}

int pegarString(char *vetor) {
	int x;
	int y = 0;
	
	for (x = 0; x < strlen(vetor); ++x) {
		if (!isalpha(vetor[x])) {
			if(!isspace(vetor[x])) {
				++y;
			}
		}
	}
	return y > 0 ? 0 : 1;
}


int pegarNumero(char *vetor) {
	int x;
	int y = 0;

	for (x = 0; x < strlen(vetor); ++x) {
		if (isalpha(vetor[x])) {
			if(vetor[x] != ',') {
				++y;
			}
		}
	}
	
	return y > 0 ? 0 : 1;
}

int main() {
	
	int i, k; 
	
  char estudante_nome[qtdalunos][50]; 
	char entrada[50]; 
	int Ra[qtdalunos]; 
	float materias[qtdalunos][materia]; 
	
  int n;
  
	for (i = 0; i < qtdalunos; ++i) {
	  printf("\nDigite o nome do estudante [%d]: ", i);
		scanf("\n%[^\n]", estudante_nome[i]);
		
	  printf("Digite a matricula do estudante [%d]: ", i);
		scanf("%s", entrada);
		
	
		
		Ra[i] = atoi(entrada);
		
		for (k = 0; k < materia; ++k) {
			printf("Digite a nota que o aluno %s obteve no curso [%d]: ", estudante_nome[i], k+1);
			scanf("%s", entrada);
			
			n = atof(entrada);
		  materias[i][k] = atof(entrada);
		}
	}
	
	int x = 0;

	for (i = 0; i < qtdalunos; ++i) {
		int s = 0;
		for (k = 0; k < materia; ++k) {
			if(materias[i][k] >= 40) {
				s += materias[i][k];		
			}
		}

		if (s >= 150) {
			++x;
		}
	}

	int aproved[x];
	int l = 0;
	
	for (i = 0; i < qtdalunos; ++i) {
		int s = 0;
		for (k = 0; k < materia; ++k) {
			if(materias[i][k] >= 40) {
				s += materias[i][k];		
			}
		}

		if (s >= 150) {
			aproved[l] = i;
			++l;
		}
	}
	

	int aux; 
	int s1 = 0, s2 = 0;
	
	for (i = 1; i < x; ++i) { 
	   for (l = 1; l < x; ++l) {
	   	
		for (k = 0; k < materia; ++k) {
				s1 += materias[l][k];	
		}
		
		for (k = 0; k < materia; ++k) {
				s2 += materias[l-1][k];	
		}
		
	      if (aproved[l-1] < aproved[l]) {
          aux = aproved[l-1];
          aproved[l-1] = aproved[l];
          aproved[l] = aux;
	      }
	   }
	}

	for (i = 0; i < x; ++i) {
		int ap = aproved[i];
		int s = 0;

		printf("\n%d. Candidado [%s] inscrito pela matricula [%d] foi Aprovado", i+1, estudante_nome[ap], Ra[ap]);
		
	}		
  return 0;
}

