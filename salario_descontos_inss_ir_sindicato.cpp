#include<stdio.h>
main (){
	float hora, mes, salario, ir, inss, sindicato, inssdesconto, 
	irdesconto, sindesconto, salario_liquido;
	printf("Informe quanto voce ganhar por hora de trabalho: R$ ");
	scanf("%f", &hora);
	printf("Informe quantas horas trabalhada nesse mes: ");
	scanf("%f", &mes);
	salario = (hora * mes) / 10;
	printf("Salario bruto: R$ %.3f\n", salario);
	printf("INSS 8 porcento: ");
	scanf("%f",&inss);
	inssdesconto = (inss * salario) / 100;
	printf("Desconto de INSS: %.3f\n", inssdesconto);
	printf("Sindicato 5 porcento: ");
	scanf("%f",&sindicato);
	sindesconto = (sindicato * salario) / 100;
	printf("Desconto de Sindicado: %.3f\n", sindesconto);
	printf("IR 11 porcento: ");
	scanf("%f",&ir);
	irdesconto= (ir * salario) / 100;
	printf("Desconto de IR: %.3f\n", irdesconto);
	salario_liquido = salario - inssdesconto - irdesconto - sindesconto;
	printf("Salario liquido R$ %.3f", salario_liquido);
}
