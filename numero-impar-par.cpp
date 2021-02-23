#include<stdio.h>
main (){
	int numero, numero1;
	printf("Informe um numero: ");
	scanf("%i", &numero1);
	numero = numero1 / 2;
	
	
	if(numero % 100 == 0 ){
		printf("Par");
	}
/*	else if(numero%50 == 0) {
		printf("nao sei");
	}*/
	else{
		printf("impar");
	}
}
