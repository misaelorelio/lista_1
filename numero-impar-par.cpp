#include<stdio.h >
main () {
	int resultado, numero1;
	printf("Informe um numero: ");
	scanf ("%i",& numero1);
	resultado = numero1% 2 ;
	
	
	if (resultado == 0 ) {
		printf ("Par");
	}
	else {
		printf ("Impar");
	}
}
