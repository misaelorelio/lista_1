#include <stdio.h>
main (){
	float numero1, numero2, numero3;
	float maior;
	
	printf("Exercicio dos numeros: ");
	scanf("%f%f%f", &numero1, &numero2, &numero3);
	
	if(numero1 > numero2 && numero1 > numero3){
		printf("Primeiro numero e maior %f", numero1);
	}else if(numero2 > numero3 && numero2 > numero1){
		printf("segundo numero é o maior%f", numero2);
	}else if(numero3 > numero1 && numero3 > numero2){
		printf("Terceiro numero e maior %.2f:", numero3);
	}
	
	
	
}
