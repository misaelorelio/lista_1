#include<stdio.h>
main (){
	
	char letra = 'm';
	printf("Qual turno voce estuda? ");
	scanf("%c", &letra);
	
	if(letra =='m'){
		printf("Bom dia!");
	}
	else if(letra =='v'){
		printf("Boa tarde!");
	}
	else if(letra =='n'){
		printf("Boa noite!");
	}
	else {
		printf("Invalido");
	}
}
