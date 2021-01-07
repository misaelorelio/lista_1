#include<stdio.h>
main(){


	float salario, aumento, novo_Salario, salario_final;
	printf("Seu salário: ");
	scanf("%f", &salario);
	
	printf("Voce está recebendo um aumento de 'x' porcento: ");
	scanf("%f", &aumento);
	
	novo_Salario = (salario * aumento) / 100;
	salario_final= salario + novo_Salario;
	
	printf("Novo salario: %.3f\n\n", salario_final);
	
	if(salario_final > 1500 && salario_final < 1700){
		printf("Voce precisa trabalhar mais para enriquecer!");
		
	}else if (salario_final < 1499){
		printf("Voce precisa de outro emprego! ");
	}
	
}
