#include<stdio.h>
#include<math.h>
main(){
    
	float num1, num2;
	float soma, multiplicacao, divisao, subtracao;
	int aux;


	printf("Informe um numero: ");
	scanf ("%f", &num1);
	printf("Informe outro numero: ");
	scanf ("%f", &num2);
	printf("Qual operacao vc deseja realizar: soma, multiplicacao, divisao ou subtracao? ");
	scanf("%f%f%f%f", &soma, &multiplicacao, &divisao, &subtracao);
	
	soma = num1 + num2;
	aux = soma;
	
	
	if(soma == aux ) {
		printf ("Esse numero e inteiro %.2f ", soma);
			printf ("Esse numero e par %.2f\n ", soma);
	}
	else {
		printf ("Esse numero e decimal");
		printf ("Esse numero e impar\n");
	}
}
