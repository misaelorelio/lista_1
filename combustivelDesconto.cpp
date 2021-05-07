#include<stdio.h >
main () {
	float litro, precoA, precoG, total, combustivel, desconto1, desconto2, volume, volume2;
	printf("Quantos litros de combustivel? ");
	scanf ("%f", &litro);
	
	printf("Alccol - 1 ou Gasolina - 2 ");
	scanf ("%f", &combustivel);
	
	precoA = 1.90;
	precoG = 2.50;

	
	if(litro <= 20 && combustivel == 1){
		volume = (precoA * litro);
		desconto1 = volume * 0.03;
		total = volume - desconto1;
		printf("Total de gastos R$ %.2f ", total);
	}
	else if(litro > 20 && combustivel == 1) {
		volume2 = (precoA * litro);
		desconto2= volume2 * 0.05;
		total = volume2 - desconto2;
		printf("Total de gastos R$ %.2f ", total);
	}
	else if(litro <= 20 && combustivel == 2){
		volume = (precoG * litro);
		desconto1 = volume * 0.04;
		total = volume - desconto1;
		printf("Total de gastos R$ %.2f ", total);
	}
	else if(litro > 20 && combustivel == 2) {
		volume2 = (precoG * litro);
		desconto2= volume2 * 0.06;
		total = volume2 - desconto2;
		printf("Total de gastos R$ %.2f ", total);
	}
}
