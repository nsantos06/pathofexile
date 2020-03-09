#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade,j,n;
	int media,idade2;
	
	printf("Quantas vezes quer repetir?");
	scanf("%d",&n);
	
	for(j = 0; j<n; j++){
		printf("digite a idade:");
		scanf("%d",&idade);
		idade2+=idade;
	}
	media = idade2 / n;
	printf("%d",media);
	
	
	
	return 0;
}
