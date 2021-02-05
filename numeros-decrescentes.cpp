#include<stdio.h>
main (){
	int numero1, numero2, numero3;
	printf("Insira o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Insira o segundo numero: ");
	scanf("%d", &numero2);
	printf("Insira o terceiro numero: ");
	scanf("%d", &numero3);
	
	/*
	if(numero1 >= numero2 && numero1 >= numero3){
		printf("Valor maior: %d\n", numero1);
	}
	else if(numero2 >= numero1 && numero2 >= numero3){
		printf("valor maior: %d\n", numero2);
	}
	else{
		printf("valor maior: %d\n", numero3);
		}
		
	if(numero1 >= numero2 && numero1 <= numero3){
		printf("Valor Medio: %d\n", numero1);
	}
	else if(numero3 >= numero1 && numero3 <= numero2){
		printf("valor Medio: %d\n", numero3);
	}
	else {
		printf("valor Medio: %d\n", numero2);
	}
		
	if(numero1 <= numero2 && numero1 <= numero3){
		printf("valor Menor: %d\n", numero1);
	}
	else if(numero2 <= numero1 && numero2 <= numero3){
		printf("valor Menor: %d\n", numero2);
	}
	else{
		printf("valor Menor: %d\n", numero3);
	}*/
	
	if(numero1 >= numero2 && numero2 >= numero3){
		printf("maior%d medio %d menor %d", numero1, numero2, numero3);
	}
	else if(numero1 > numero3 && numero3 > numero2){
		printf("maior%d medio %d menor %d", numero1, numero3, numero2);
	}
	else if(numero2 >= numero1 && numero1 >= numero3){
		printf("maior%d medio %d menor %d", numero2, numero1, numero3);
	}
	else if(numero2 > numero3 && numero3 > numero1){
		printf("maior%d medio %d menor %d", numero2, numero3, numero1);
	}
	else if(numero3 >= numero1 && numero1 >= numero2){
		printf("maior%d medio %d menor %d", numero3, numero1, numero2);
	}
	else{
		printf("maior%d medio %d menor %d", numero3, numero2, numero1);
	}
}
