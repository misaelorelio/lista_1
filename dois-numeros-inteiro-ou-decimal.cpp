#include<stdio.h>
#include<math.h>
main(){
    
	float num1, num2;
	float soma, multiplicacao, divisao, subtracao;
	int aux, decimal;


	printf("Informe um numero: ");
	scanf ("%f", &num1);
	printf("Informe outro numero: ");
	scanf ("%f", &num2);
	printf("Qual operacao vc deseja realizar: soma, multiplicacao, divisao ou subtracao? ");
	scanf("%f%f%f%f", &soma, &multiplicacao, &divisao, &subtracao);
	
	soma = num1 + num2;
	aux = soma;
	decimal = aux% 2;
	
	multiplicacao = num1 * num2;
	aux = multiplicacao;
	decimal = aux% 2;
	
	divisao = num1 / num2;
	aux = divisao;
	decimal = aux% 2; 
	
	subtracao = num1 - num2;
	aux = subtracao;
	decimal = aux% 2;
	
//	printf("calculo: %.2f\n %.2f\n %.2f\n %.2f\n", soma, multiplicacao, divisao, subtracao);
	
	
		if(aux == soma || aux == multiplicacao || aux == divisao || aux == subtracao) {
			printf ("Esse numero e inteiro\n");
	}
		else {
			printf ("Decimal\n");
	}
		if(decimal == 0){
			printf("Esse numero e par\n ");
		}
		else {
			printf ("Impar\n");
	}	
		if(soma < 0 || multiplicacao < 0 || divisao < 0 || subtracao < 0) {
			printf ("Esse numero e negativo\n");
	}
		else {
			printf ("Positivo");
	}

}
