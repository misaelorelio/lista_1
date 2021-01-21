#include<stdio.h>
main (){
	float mquadrado, gasto1, gasto2, total1, total2, total3, misturar;
	printf("Informe o tamanho da area a ser pintada m2: ");
	scanf("%f", &mquadrado);
	gasto1 = mquadrado / 54;
	gasto2 = mquadrado / 10.8;
	misturar = mquadrado / (64.8 + 6.48);
	printf("Quantidade de latas 18 L: %.2f\n", gasto1);
	printf("Quantidade de latas 3.6 L: %.2f\n", gasto2);
	printf("Quantidade de latas misturado L: %.2f\n", misturar);
	total1 = gasto1 * 80;
	total2 = gasto2 * 25;
	total3 = misturar * 105;
	printf("Gastos com tinta 18 litros: R$ %.3f\n", total1);
	printf("Gastos com tinta 3.6 litros: R$ %.3f\n", total2);
	printf("Gastos com tinta misturada: R$ %.3f\n", total3);
	



}
