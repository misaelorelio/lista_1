#include<stdio.h>
main(){
float a, b, c, v1, v2, v3;
	
	printf("Digite um numero para A: ");
	scanf("%f", &a);
	printf("Digite outro numero para B: ");
	scanf("%f", &b);
	printf("Digite outro numero para C: ");
	scanf("%f", &c);
	
	v3 = a;
	v1 = c;
	v2 = b;
	printf("\n");
	
	printf("Valor de A: %.2f\n", v1);

	printf("Valor de B: %.2f\n", v3);

	printf("Valor de C: %.2f", v2);
}
