#include<stdio.h>
main (){

	float arroz1, arroz2, arroz3;
	printf("Preco do arroz 1:");
	scanf("%f", &arroz1);
	printf("Preco do arroz 2:");
	scanf("%f", &arroz2);
	printf("Preco do arroz 3:");
	scanf("%f", &arroz3);
	
	if(arroz1 < arroz2 && arroz1 < arroz3){
	printf("Comprar arroz 1: %.2f", arroz1);
	}else if(arroz2 < arroz1 && arroz2 < arroz3){
	printf("Comprar arroz 2: %.2f", arroz2);
	}else if(arroz3 < arroz1 && arroz3 < arroz2){
	printf("Comprar arroz 3: %.2f", arroz3);
	}
}
