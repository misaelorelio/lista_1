#include<stdio.h>
main (){
	float peso, multa, excesso, maximo ;
	printf("Peso do peixe pescado? Kg ");
	scanf("%f", &peso);
	printf("Peso maximo: Kg ");
	scanf("%f", &maximo);
	excesso = peso - maximo;
	printf("Excesso: %.2f\n\n", excesso);
	multa = excesso * 4;
	printf("Valor da multa a pagar: %.2f", multa); 
	
}
