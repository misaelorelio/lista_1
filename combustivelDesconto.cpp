#include<stdio.h >
main () {
	float litro, precoA, precoG, total, combustivel, desconto1, desconto2;
	printf("Quantos litros de combustivel? ");
	scanf ("%f", &litro);
	
	printf("Alccol - 1 ou Gasolina - 2 ");
	scanf ("%f", &combustivel);
	
	precoA = 1.90;
	precoG = 2.50;
	desconto1 = litro * 0.03;
	desconto2 = litro * 0.05;
	
	if(litro <= 20 && combustivel == 1){
		total = (precoA * litro) - desconto1;
		printf("Total de gastos R$ %.2f ", total);
	}
	else if(litro > 20 && combustivel == 2) {
		total = (precoA * litro) - desconto2;
		printf("Total de gastos R$ %.2f ", total);
	}
	/*desconto1 = (quantidade * 0.03);
	desconto2 = (quantidade * 0.05);
	valor = (quantidade * 1.90) ;
	total1 = valor - desconto1;
	total2 = valor - desconto2;
	alcool = quantidade;
	
	if(alcool <= 20){
		printf("Valor de desconto: %.2f\n ",desconto1);
		printf("Valor de desconto:%.2f\n",total1);
	}
	else if(alcool > 20){
		printf("Valor de desconto: %.2f ",desconto2);
		printf("Total R$:%.2f ",total2);
	}*/
}
