#include<stdio.h>
main (){
	int ano;
	printf("Informe um ano calendario: ");
	scanf("%d", &ano);
	
	
	
	if(ano % 4 == 0 && ano % 100 != 0){
		printf("Ano bissexto");
	}
	else if(ano%400 == 0) {
		printf("Ano bissexto");
	}
	else{
		printf("Ano nao bissexto");
	}
}

