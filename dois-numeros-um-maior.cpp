#include<stdio.h>
main () {
	float num1, num2;
	printf("Insira dois numeros: ");
	scanf("%f%f", &num1,&num2);
	if (num1 > num2 ){
		printf("Esse é o numero maior: %.2f", num1);
	}else if (num2 > num1){
		printf("Esse é o numero maior: %.2f", num2);
	}
}
