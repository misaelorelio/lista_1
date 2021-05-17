#include<stdio.h >
main () {
	
	int nota;
	printf("Informe uma nota entre 0 e 10:  ");
	scanf ("%i", &nota);
	
	if(nota > 10 || nota < 0){
		printf("Informe um valor valido");
		printf("Informe uma nota entre 0 e 10:  ");
		scanf ("%i", &nota);
	}
	else{
		printf("valor valido");
	}
	
}
