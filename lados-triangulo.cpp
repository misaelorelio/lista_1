#include<stdio.h>
main (){

	float lado1, lado2, lado3;
	
	printf("Lado 1: ");
	scanf("%f", &lado1);
	printf("Lado 2: ");
	scanf("%f", &lado2);
	printf("Lado 3: ");
	scanf("%f", &lado3);
	
	if(lado1 > lado2 && lado1 > lado3 && lado2 > lado3){
		printf("triangulo isosceles");
	}
	else if(lado2 > lado1 && lado2 > lado3 && lado1 > lado3){
		printf("triangulo isosceles");
	}
	else if(lado3 > lado1 && lado2 > lado1 && lado3 > lado2){
		printf("triangulo isosceles");
	}
	else if(lado1 < lado3 && lado1 > lado2 && lado3 > lado2){
		printf("triangulo isosceles");
	}
	else if(lado1 < lado2 && lado1 < lado3 && lado3 < lado2){
		printf("triangulo isosceles");
	}
	else if(lado2 < lado1 && lado2 < lado3 && lado1 < lado3){
		printf("triangulo isosceles");
	}
	else if(lado3 < lado1 && lado3 < lado2 && lado1 < lado2){
		printf("triangulo isosceles");
	}
	else if(lado2 < lado3  && lado2 < lado1 && lado1 < lado3){
		printf("triangulo isosceles");
	}
	
	if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
		printf("triangulo Equilatero");
	}
	else if(lado2 == lado1 && lado2 == lado3 && lado1 == lado3){
		printf("triangulo Equilatero");
	}
	else if(lado3 == lado1 && lado2 == lado1 && lado3 == lado2){
		printf("triangulo Equilatero");
	}
	
	if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		printf("triangulo Escaleno");
	}
	else if(lado2 != lado1 && lado2 != lado3 && lado1 != lado3){
		printf("triangulo Escaleno");
	}
	else if(lado3 != lado1 && lado2 != lado1 && lado3 != lado2){
		printf("triangulo Escaleno");
	}
	
	
	/*if(lado1 == lado2 && lado1 != lado3){
		printf("Triangulo e triangulo isosceles");
	}
	else if( lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
			printf("Triangulo Equilatero");
	}
	else if( lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
			printf("Triangulo Escaleno");
	}
	if(lado2 == lado1 && lado2 != lado3){
		printf("Triangulo e triangulo isosceles");
	}
	else if( lado2 == lado1 && lado2 == lado3 && lado1 == lado3){
			printf("Triangulo Equilatero");
	}
	else if( lado2 != lado1 && lado1 != lado3 && lado2 != lado3){
			printf("Triangulo Escaleno");
	}
	if(lado3 == lado2 && lado3 != lado1){
		printf("Triangulo e triangulo isosceles");
	}
	else if( lado3 == lado2 && lado3 == lado1 && lado1 == lado2){
			printf("Triangulo Equilatero");
	}
	else if( lado3 != lado2 && lado3 != lado1 && lado2 != lado1){
			printf("Triangulo Escaleno");
	}*/


}
