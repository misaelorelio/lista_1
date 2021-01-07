#include<stdio.h>
main(){	
	float base, altura, area;
	printf("Insira o valor referente a  altura da figura: ");
	scanf("%f", &altura);
	printf("Insira o valor referente a base da figura: ");
	scanf("%f", &base);
	
	area = (base * altura) / 2;
	
	printf("A area da figura : %.3f", area);
}
