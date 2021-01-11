#include<stdio.h>
main(){
	float hora, trabalho, salario;
	printf("Quantos voce ganha por hora de trabalho? ");
	scanf("%f", &hora);
	printf("Horas de trabalho no mes? ");
	scanf("%f", &trabalho);
	salario = (hora * trabalho) / 10;
	printf("Seu salario nesse mes: %.3f", salario);
	
}
