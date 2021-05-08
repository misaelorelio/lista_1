#include<stdio.h >
main () {
	float  kgCarne, desconto, pagar, precoTotal, cartao;
	int tipo;
	printf("Qual carne voce vai querer? 1 -File duplo, 2 -Alcatra, 3 -Picanha  ");
	scanf ("%i", &tipo);
	
	printf("Quantos Kg? ");
	scanf ("%f", &kgCarne);
	
	printf("Pagamento: cartao Tabajara (1) ou Formas de pagamento difdrente (0): ");
	scanf ("%f", &cartao);
	

	if(tipo == 1 && kgCarne <= 5 && cartao == 1){
		precoTotal = kgCarne * 4.9;
		desconto = precoTotal * 0.05;
		pagar = precoTotal - desconto;
		printf("Preco da sua compra R$ %.2f\n", pagar);
	}
	else if(tipo == 1 && kgCarne <= 5 && cartao == 0) {
		precoTotal = kgCarne * 4.9;
		printf("Preco da sua compra R$ %.2f\n", precoTotal);
	}
	
	if(tipo == 2 && kgCarne <= 5 && cartao == 1){
		precoTotal = kgCarne * 5.9;
		desconto = precoTotal * 0.05;
		pagar = precoTotal - desconto;
		printf("Preco da sua compra R$ %.2f\n", pagar);
	}
	else if(tipo == 2 && kgCarne <= 5 && cartao == 0) {
		precoTotal = kgCarne * 5.9;
		printf("Preco da sua compra R$ %.2f\n", precoTotal);
	}
}
