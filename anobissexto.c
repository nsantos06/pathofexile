#include <stdio.h>
#include <stdlib.h>
int main(){
	int ano,mes;
	printf("Digite o mes respectivo ao numero: ");
	scanf("%d",&mes);
	
	printf("Digite o ano: ");
	scanf("%d",&ano);
		if(ano % 4==0 )
		printf("\n O ano de %d e bissexto e o mes e ",ano,mes);
	
		else if ((ano % 4 == 0 && ano % 100 != 0)) {
		printf("\n O ano de %d e bissexto e o mes e",ano,mes); 
		} 
		else printf("O Ano de %d Nao e bissexto e o Mes e ",ano,mes);

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
    printf("\n um mes invalido,digite numeros de 1 a 12 \n");
    printf(" \n ---SAINDO--- \n ");
	
	system("pause");
    break;
}
printf("\n Se o Ano for bissexto, tera um dia a mais em fevereiro, Caso nao seja nao adicionara um dia a mais \n ");
	return 0;
}
