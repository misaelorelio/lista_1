#include <stdio.h>
main (){
	int numero1, numero2, numero3;
	
	printf("Exercicio dos numeros: ");
	scanf("%d%d%d", &numero1, &numero2, &numero3);
	
	if(numero1 > numero2 && numero1 > numero3){
		printf("Primeiro numero e maior:  %d", numero1);
	}else if(numero2 > numero3 && numero2 > numero1){
		printf("segundo numero é o maior: %d", numero2);
	}else if(numero3 > numero1 && numero3 > numero2){
		printf("Terceiro numero e maior: %d", numero3);
	}if(numero3 < numero2 && numero3 < numero1){
		printf("Terceiro numero e o menor: \n%d ", numero3);
	printf("\n\n");
	}else if(numero2 < numero1 && numero2 < numero3){
		printf("segundo numero e o menor: \n%d ", numero2);
	}else if(numero1 < numero2 && numero1 < numero3){
		printf("Primeiro numero e o menor: \n%d ", numero1);
	}
	
	
	
}
