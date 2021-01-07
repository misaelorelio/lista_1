#include<stdio.h>
#include<math.h>
main(){
float temperatura, grausF;
	printf("Informe a temperatura em graus: ");
	scanf("%f", &temperatura);
	grausF = (1.8 * temperatura) + 32;
	printf("\nTemperatura em Fahrenheit: %.2f", grausF);
}
	
