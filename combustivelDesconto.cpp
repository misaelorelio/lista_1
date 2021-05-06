#include<stdio.h >
main () {
	int resposta1, resposta2, resposta3, resposta4, resposta5, soma;
	char A, B;
	printf("Quantos litros de combustivel? ");
	scanf ("%i", &resposta1);
	
	printf("Alccol ou gasolina? ");
	scanf ("%c", &A);
	
	printf("Mora perto da vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta3);
	
	printf("Devia para a vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta4);
	
	printf("Já trabalhou com a vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta5);
	
	soma = resposta1 + resposta2 + resposta3 + resposta4 + resposta5;
	
	
	
	if(soma == 2){	
		printf("Pessoa suspeita\n");
	}
	else if(soma == 3 || soma == 4){
		printf("Cumplice do assassinato\n");
	}
	else if(soma == 5){
		printf("Assassino\n");
	}
	else{
		printf("Inocente");
	}
}
