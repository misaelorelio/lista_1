#include<stdio.h>
main (){
	float mquadrado, gasto, total;
	printf("Informe o tamanho da area a ser pintada m2: ");
	scanf("%f", &mquadrado);
	gasto = mquadrado / 54;
	printf("Quantidade de latas: %.2f\n", gasto);
	total = gasto * 80;
	printf("Gastos totais com tinta: R$ %.3f", total);
	printf("Latas 18 litros: %.2f", gasto)


}
