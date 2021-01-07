#include<stdio.h>
#include<math.h>
main(){
float num1, num2;
	printf("Digite um numero 1: ");
	scanf("%f", &num1);
	printf("Digite outro numero 1: ");
	scanf("%f", &num2);
	
	printf("Numero 1: %.1f\n", num1);
	printf("Numero 2: %.1f\n", num2);
	
	num1 = num1  + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("Resultado: numero 1: %.2f\tnumero 2: %.2f\n", num1, num2);
}
