#include<stdio.h>
main (){

	float nota1, nota2, media;
	
	printf("Primeira nota 0 a 10: ");
	scanf("%f", &nota1);
	printf("Segunda nota 0 a 10: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if( media >= 9 && media <= 10){
		printf("Conceito A\n");
		printf("Media: %.2f\n", media);
		printf("Nota1: %.2 Nota 2: %.2f\n", nota1, nota2);
		printf("Voce esta aprovado");
	}
	
	else if(media >= 7.5 && media <= 8.9){
		printf("Conceito B\n");
		printf("Media: %.2f\n", media);
		printf("Nota1: %.2f Nota 2: %.2f\n", nota1, nota2);
		printf("Voce esta aprovado");
	}
	else if(media >= 6 && media <= 7.4){
		printf("Conceito C\n");
		printf("Media: %.2f\n", media);
		printf("Nota1: %.2f Nota 2: %.2f\n", nota1, nota2);
		printf("Voce esta aprovado");
	}
	else if(media >= 4 && media <= 5.9){
		printf("Conceito D\n");
		printf("Media: %.2f\n", media);
		printf("Nota1: %.2f Nota 2: %.2f\n", nota1, nota2);
		printf("Voce esta REPROVADO");
	}
	else if(media < 3.9){
		printf("Conceito E\n");
		printf("Media: %.2f\n", media);
		printf("Nota1: %.2f Nota 2: %.2f\n", nota1, nota2);
		printf("Voce esta REPROVADO");
	}
	else{
		printf("Invalido");
	}
}
