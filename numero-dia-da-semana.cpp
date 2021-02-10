#include<stdio.h>
#include <stdlib.h>
main (){
	
	int numero;
	printf("Digite de 1 a 7 para saber o dia da semana: ");
	scanf("%i", &numero);
	
	if(numero > 0 && numero <= 1){
		printf("Segunda feira");
	}
	else if(numero == 2){
		printf("Terça feira");
	}
	else if(numero == 3){
		printf("Quarta feira");
	}
	else if(numero == 4){
		printf("Quinta feira");
	}
	else if(numero == 5){
		printf("Sexta feira");
	}
	else if(numero == 6){
		printf("Sabado");
	}
	else if(numero == 7){
		printf("Domingo");
	}
	else{
		printf("Invalido");
	}
}
