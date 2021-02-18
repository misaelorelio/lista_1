#include<stdio.h>
main(){
	
	float n1, n2, n3, media;
	printf("Informe a nota: ");
	scanf("%f", &n1);
	printf("Informe a nota: ");
	scanf("%f", &n2);
	printf("Informe a nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2+ n3) / 3;
	printf("Media:%.2f\n", media);
	
	if(media >= 7 && media < 10){
		printf("Aprovado meu garoto!!");
	}
	else if(media < 7){
		printf("Reprovado meu garoto!!");
	}
	else if(media == 10){
		printf("APROVADISSIMO meu garoto!!");
	}
	
}
