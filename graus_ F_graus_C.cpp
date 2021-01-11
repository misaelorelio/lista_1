#include<stdio.h>
main(){
	float fahrenheit, grausC, temp;
	printf("Informe a temperatura em Graus fahrenheit: ");
	scanf("%f", &fahrenheit);
	grausC = (fahrenheit - 32) / 9;
	temp = grausC * 5;
	printf("Temperatura em Graus Celsius: %.2f", temp);
}
