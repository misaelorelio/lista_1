#include<stdio.h>
main(){
	float lado1, lado2, area, area2;
	printf("Insira uma medida da figura: ");
	scanf("%f", &lado1);
	printf("Insira outra medida da figura: ");
	scanf("%f", &lado2);
	area= lado1 * lado2;
	area2 = area * 2;
	printf("Area multiplicada por 2: %.2f", area2);
}
