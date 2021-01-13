#include<stdio.h>
main(){
	float altura, soma;
	printf("Qual sua altura? ");
	scanf("%f", &altura);
	soma=(72.7 * altura) -58;
	printf("Seu peso ideal kg: %.2f", soma);
}
