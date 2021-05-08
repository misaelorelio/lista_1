#include<stdio.h >
main () {
	float tipo, kgCarne, desconto, maca, precoTotal;
	printf("Quantos quilos de fruta? ");
	scanf ("%f", &kg);
	
	printf("Morango - 1 ou Maca - 2 ");
	scanf ("%f", &frutas);

	

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
