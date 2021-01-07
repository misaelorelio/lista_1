#include<stdio.h>
#include<math.h>
main(){
	float saco, conversao, consumo, consumo_dia, A5dias, resto;
	printf("Peso do saco de raçao em Kg: ");
	scanf("%f", &saco);
	//conversao = saco * 1000;
	printf("Informe quantos gramas de raçao é consumido diariamente: ");
	scanf("%f", &consumo);
	consumo_dia = consumo/ 1000;
	A5dias = consumo_dia * 5;
	resto = saco - A5dias;
	//consumo_dia = (consumo * 5);
	//apos5dias = saco - consumo_dia; 
	printf("Apos 5 dias, o saco de raçao tera Kg: %.2f\n\n", resto);
	
	if(resto <= 5){
		printf("Voce precisa comprar mais 2 sacos!");
	}else if(resto > 5 && resto < 11){
		printf("Voce deve comprar 1 saco");
	}else{
		printf("Voce nao precisa comprar nada ainda");	
		}
}
