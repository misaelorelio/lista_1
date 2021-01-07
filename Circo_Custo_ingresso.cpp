#include<stdio.h>
#include<math.h>
main(){
	float ingresso, custo, total, venda;
	printf("Custo do espetaculo: ");
	scanf("%f", &custo);
	printf("Preço do ingresso: ");
	scanf("%f", &ingresso);
	venda = custo / ingresso;
	printf("Quantidade minima de ingressos a serem vendidos: %.1f", venda);
}
