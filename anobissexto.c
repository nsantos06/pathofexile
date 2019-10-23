#include <stdio.h>
#include <stdlib.h>
int main(){
	int ano,mes;
	printf("Digite o mes respectivo ao numero: \n ");
	scanf("%d",&mes);
	
	printf("Digite o ano: ");
	scanf("%d",&ano);
		if(ano % 4==0 )
		printf("Ano bissexto  ");
		
		else if ((ano % 4 == 0 && ano % 100 != 0)) {
		printf("Ano bissexto  "); 	
		} 
		else printf("O ano de %d nao e bissexto e o mes e : ",ano,mes);

	switch(mes){
    case 1:
    printf("Janeiro");
    break;
    case 2:
    printf("Fevereiro");
    break;
    case 3:
    printf("Marco");
    break;
    case 4:
    printf("Abril");
    break;
    case 5:
    printf("Maio");
    break;
    case 6:
    printf("Junho");
    break;
    case 7:
    printf("Julho");
    break;
    case 8:
    printf("Agosto");
    break;
    case 9:
    printf("Setembro");
    break;
    case 10:
    printf("Outubro");
    break;
    case 11:
    printf("Novembro");
    break;
    case 12:
    printf("Dezembro");
    break;
    default:
    printf("Digite um numero valido:");
    break;
}

	return 0;
}
