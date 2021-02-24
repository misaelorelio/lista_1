#include<stdio.h>
main (){
	int valor, cem, cinquenta, dez, cinco, um;
	printf("Informe o valor de saque minimo R$ 10 maximo R$600: ");
	scanf("%i", &valor);
	
	cem = ((valor - (valor%100))/100);
	cinquenta = ((valor%100)/50);
	dez = (((valor%50)/10));
	cinco = (((valor%10)/4));
	um=  ((valor%5));
	
	printf("R$100:%i\nR$50:%i\nR$10:%i\nR$5:%i\nR$1:%i" , cem, cinquenta, dez, cinco, um);
	
}
