#include<stdio.h >
main () {
	float  kgCarne, desconto, pagar, precoTotal;
	int tipo;
	printf("Qual carne voce vai querer? 1 -File duplo, 2 -Alcatra, 3 -Picanha  ");
	scanf ("%i", &tipo);
	
	printf("Quantos Kg? ");
	scanf ("%f", &kgCarne);

	

	if(frutas == 1 && kg <= 5){
		total = kg * 2.5;
		printf("Preco da sua compra R$ %.2f\n", total);
	}
	else if(frutas == 2 && kg <= 5){
		total = kg * 1.8;
		printf("Preco da sua compra R$ %.2f\n", total);
	}
	else if(frutas == 1 && kg > 5 && kg < 8){
		total = kg * 2.2;
		printf("Preco da sua compra R$ %.2f\n", total);
	}
	else if(frutas == 2 && kg > 5 && kg < 8){
		total = kg * 1.5;
		printf("Preco da sua compra R$ %.2f\n", total);
	}
	else if(kg > 8 || total > 25){
		printf("Voce recebera 10 porcento de desconto!");
	}
}
