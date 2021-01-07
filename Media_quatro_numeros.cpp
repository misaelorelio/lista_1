#include<stdio.h>
main(){

float numero;
	float total, media, valor;
	total=0;
	for(numero=0; numero < 4; numero++){
	printf("Digite os numeros: ");
	scanf("%f", &valor);
	
	total= total + valor;
	media= total /4;
}
	printf("Resultado: %.2f\n\n", media);
	
	if(media < 40){
		printf("Morreu");
	}else{
		printf("Vivo");
	}
	
}
