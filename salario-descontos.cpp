#include<stdio.h>
main (){
	
	int salario, ir, valor, fgts, salario_liquido, descontofgts, sindicato, descontosind;
	float imposto = 0;
	printf("Horas trabalahadas nesse mes: ");
	scanf("%d", &salario);
	printf("Valor por horas trabalhadas:  ");
	scanf("%d", &valor);
	printf("Desconto FGTS 11 porcento: ");
	scanf("%d", &fgts);
	printf("Sindicato 3 porcento: ");
	scanf("%d", &sindicato);
	/*printf("Imposto: ");
	scanf("%d", &imposto);
	descontoimposto = (salario * imposto) / 100;*/
	salario_liquido = (salario * valor);
	descontofgts = (salario_liquido * fgts ) / 100;
	descontosind = (salario_liquido * sindicato) / 100;
	printf("\n\n");
	
	if(salario_liquido <= 900){
		printf("Salario Bruto: %d\n", salario_liquido);
		printf("IR: ISENTO\n");
		printf("FGTS: %d\n", descontofgts);
		printf("Sindicato: %d\n", descontosind);
		printf("Total de descontos: %d\n", (descontosind + descontofgts));
		printf("Salario liquido: %d", salario_liquido - (descontosind + descontofgts));
	}
	else if(salario_liquido <= 1500 && salario_liquido >= 900){
		printf("Salario Bruto: %d\n", salario_liquido);
		printf("Imposto: %d\n", (salario_liquido * 5) / 100);
		printf("FGTS: %d\n", descontofgts);
		printf("Sindicato: %d\n", descontosind);
		printf("Total de descontos: %d\n", (descontosind + descontofgts) + (salario_liquido * 5) / 100);
		printf("Salario liquido: %d", salario_liquido - (descontosind + descontofgts) - ((salario_liquido * 5) / 100));
	}
	else if(salario_liquido <= 2500 && salario_liquido >= 1500){
		printf("Salario Bruto: %d\n", salario_liquido);
		printf("Imposto: %d\n", (salario_liquido * 10) / 100);
		printf("FGTS: %d\n", descontofgts);
		printf("Sindicato: %d\n", descontosind);
		printf("Total de descontos: %d\n", (descontosind + descontofgts) + (salario_liquido * 10) / 100);
		printf("Salario liquido: %d", salario_liquido - (descontosind + descontofgts) - ((salario_liquido * 10) / 100));
	}
	else if (salario_liquido > 2500){
		printf("Salario Bruto: %d\n", salario_liquido);
		printf("Imposto: %d\n", (salario_liquido * 20) / 100);
		printf("FGTS: %d\n", descontofgts);
		printf("Sindicato: %d\n", descontosind);
		printf("Total de descontos: %d\n", (descontosind + descontofgts) + (salario_liquido * 20) / 100);
		printf("Salario liquido: %d", salario_liquido - (descontosind + descontofgts) - ((salario_liquido * 20) / 100));
	}

}
