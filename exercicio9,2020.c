#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade,j,idade2=0;
	int media = 0;
	int n = 0;
	
	printf("Quantas vezes quer repetir?");
	scanf("%d",&n);
		
	for(j = 0; j<n; j++){
		printf("digite a idade:");
		scanf("%d",&idade);
		if((n-1) != j){
		idade2+=idade;	
		}
		
	}
	media = idade2 / (n-1);
	printf("%d",media);
	
	
	
	return 0;
}
