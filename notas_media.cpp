// Atividade 4:	
#include<stdio.h>
main(){
	float nota1, nota2, nota3, nota4, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	printf("Informe a quarta nota: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("\n");
	
	printf("A media das notas: %.2f", media);
}
