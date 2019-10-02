
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	
	char produto[100];
	float preco,qtd;
	
	printf("Digite o nome do produto: \n ");
	scanf("%s",&produto);
	
	printf("Digite o preco do produto: \n ");
	scanf("%f",&preco);
	
	printf("Digite a quantidade do produto: \n ");
	scanf("%f",&qtd);
	float valortotal = qtd * preco;
	
	if(qtd <= 10){
		printf("o nome do produto e : %s e o preco e : %f ",produto,valortotal);
	}
	else if(qtd >= 11 && qtd <=50){
		float dif = valortotal * 0.10;
		float dif2 = valortotal - dif;
		printf("o nome do produto e : %s e o preco e :  %f",produto,dif2);
		}		
	else if (qtd >= 51){
		float desconto = valortotal * 0.20;
		float desconto2 = valortotal - desconto;
		printf("o nome do produto e %s e o preco e : %f ",produto,desconto2);
	}
	
return 0;
	
}
