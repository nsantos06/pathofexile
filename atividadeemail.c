#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
exercicio 2
int main(){

int linhas,colunas,k,r;
int cont=0;

printf("Linhas: ");
scanf("%d",&linhas);

printf("\nColunas: ");
scanf("%d",&colunas);

int matriz[linhas][colunas];
for(k = 0; k<linhas; k++){
  for(r=0 ; r<colunas;r++){
  printf("Informe o numero a ser armazenado na linha %d coluna %d: ", k+1,r+1);
  scanf("%d", &matriz[k][r]);
}
printf("\n");
}
for(k = 0; k<linhas;k++){
  for(r=0;r<colunas;r++){
  if(matriz[k][r] < 0 || matriz[k][r] > 100){
    cont++;
}
}
printf("\nValores fora do intervalo [0,100] na linha %d = %d", k+1 , cont);
cont = 0;

}
return 0;
}

exercicio 3
  
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

int n,m;
int k,i;
printf("Quantidade de numeros no vetor A:");
scanf("%d",&n);

printf("Quantidade de numeros no vetor B:");
scanf("%d",&m);
int cont = 0;
int a[n];
int b[m];

for(i = 0; i<n; ++i){
  printf("Digite os numeros no vetor A:");
  scanf("%d",&a[i]);
  if(a[i] % 2 == 0){
    ++cont;
  }
 
}
for(i = 0; i<m; ++i){
  printf("Digite os numeros no vetor B:");
  scanf("%d",&b[i]);
  if(b[i] % 2 != 0){
    ++cont;
  }
}
int c[cont];
int indexc = 0;

for(i = 0; i<n; ++i){
  if(a[i] % 2 == 0){
    c[indexc++] = a[i];
  }
}

for(i = 0; i<m; ++i){
  if(b[i] % 2 != 0){
    c[indexc++] = b[i];
  }
}

printf("\n Elementos do vetor A ");
for(i = 0; i<n; ++i){
  printf("%d",a[i]);
}

printf("\n Elementos do vetor B ");
for(i = 0; i<m; ++i){
  printf("%d",b[i]);
}

printf("\n Elementos do vetor C ");
for(i = 0; i<cont; ++i){
  printf("%d",c[i]);
}
return 0;
}

