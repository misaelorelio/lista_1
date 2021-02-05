#include<stdio.h>
main (){
	
	int salario, aumento, final;
	printf("Informe o salario: ");
	scanf("%d", &salario);
	printf("Informe o aumento em porcentagem: ");
	scanf("%d", &aumento);
	
	final = (salario * aumento ) / 100;
	
	/*aumentoA = (salario * 20) /100;
	salarioA = (aumentoA + salario);
	aumentoB = (salario * 15) /100;
	salarioB = aumentoB + salario;
	aumentoC = (salario * 10) /100;
	salarioC = aumentoC + salario;
	aumentoD = (salario * 5) /100;
	salarioD = aumentoD + salario;
	salarioA = 280;
	salarioB =  280;
	salarioC =  700;
	salarioD = 1500;
	finalA = salarioA + aumentoA;*/
	
	printf("\n");
	if(salario <= 280 && aumento == 20){
		printf("Antigo salario: R$ %d\n", salario);
		printf("Aumento %d\n", final);
		printf("Reajuste de %d porcento\n", aumento);
		printf("Novo salario R$ %d \n", (final + salario));
	}	
	else if(salario <= 700 && salario > 280 && aumento == 15){
		printf("Antigo salario: R$ %d\n", salario);
		printf("Aumento R$ %d\n", final);
		printf("Reajuste de %d porcento\n", aumento);
		printf("Novo salario R$ %d \n", (final + salario));
	}
	else if(salario <= 1500 && salario > 700 && aumento == 10){
		printf("Antigo salario: R$ %d\n", salario);
		printf("Aumento R$ %d\n", final);
		printf("Reajuste de %d porcento\n", aumento);
		printf("Novo salario R$ %d \n", (final + salario));
	}
	else if(salario > 1500 && aumento == 5){
		printf("Antigo salario: R$ %d\n", salario);
		printf("Aumento R$ %d\n", final);
		printf("Reajuste de %d porcento\n", aumento);
		printf("Novo salario R$ %d \n", (final + salario));
	}
	else{
		printf("Invalido vacilao!!");
	}
}
