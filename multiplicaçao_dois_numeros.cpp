#include<stdio.h>
main(){
	float valor1, valor2, resultado;
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	resultado= valor1 * valor2;
	
	printf("Resultado: %.2f", resultado);
}
