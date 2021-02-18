#include<stdio.h>
main (){
	int numero, centenas, dezenas, unidades;
	printf("Informe um numero de 0 a 1000: ");
	scanf("%d", &numero);
	
	centenas = numero / 100;
	dezenas = (numero % 100) / 10;
	unidades = (numero % 100) % 10;
	
	printf("Centenas:%i\nDezenas:%i\nUnidades:%i", centenas, dezenas, unidades);
	
}
