#include<stdio.h>
#include<math.h>
main(){
	float salario, novo, bonus, salario_final; 
	float imposto, base, salario_liquido;
	printf("Qual seu salario meu jovem?: ");
	scanf("%f", &salario);
	printf("Voce esta recebendo um aumento!!");
	scanf("%f", &bonus);
	novo = (salario * bonus)/100;
	base= salario + novo;
	printf("Seu novo salario!! %.3f\n\n", base);
	
	printf("Infelizmente voce precisa pagar 7 porcento de imposto.. ");
	scanf("%f", &imposto);
	salario_liquido = (base * imposto) / 100;
	salario_final = base - salario_liquido;
	printf("\n");
	printf("Seu salario meu jovem! %.3f", salario_final);
	
}
