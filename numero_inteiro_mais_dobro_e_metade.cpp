#include<stdio.h>
#include<math.h>
main(){
	//a)
	int num1, num2;
	float num3;
	float resul1;
	printf("Digite um numero inteiro: ");
	scanf("%i", &num1);
	printf("Digite outro numero inteiro: ");
	scanf("%i", &num2);
	printf("Digite um numero real: ");
	scanf("%f", &num3);
	/*resul1 = (num1 * 2) + (num2 / 2);
	printf("Resultado: %.2f", resul1);*/ //Esse calculo não está retornando número com decimal.
	
	//b)
	/*resul1 = (num1 * 3) + num3;
	printf("Resultado: %.2f", resul1);*/
	
	//c
	resul1 = pow (num3, 3);
	printf("Resultado: %.2f", resul1);
}
