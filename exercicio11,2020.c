#include <stdio.h>

int main(void) {
 int n,k;
 printf("digita o numero: ");
 scanf("%d",&n);

for( k = 1; k*(k+1)*(k+2) < n; k++){
 
}
if(k*(k+1)*(k+2) == n){
  printf("é triangular %d",n);
}
else printf("nao é triangular");
  return 0;
}


