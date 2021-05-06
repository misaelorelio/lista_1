#include<stdio.h >
main () {
	float tipo, quantidade1;
	float alcool, valor, quantidade, desconto1, desconto2, bomba1, total1, total2;
	
	printf("Quantos litros de combustivel? ");
	scanf ("%f", &quantidade);
	
	printf("Alccol ou gasolina? ");
	scanf ("%f", &alcool);
	
	
	desconto1 = (quantidade * 0.03);
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
	}
}
