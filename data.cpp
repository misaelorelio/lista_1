#include<stdio.h>
main (){
	int dia, mes, ano;
	printf("Informe a data: dia, mes e ano: ");
	scanf("%d%d%d", &dia, &mes, &ano);
	
	if(dia > 0 && dia < 31 && mes >0 && mes <= 12 && ano >0){
		printf("%d/%d/%d", dia, mes, ano);
	}
	else{
		printf("Errado");
	}
}
