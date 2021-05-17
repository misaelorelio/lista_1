#include<stdio.h >
main () {
	
	int nome, senha;
	printf("Informe seu nome: ");
	scanf ("%i", &nome);
	
	printf("Informe sua senha: ");
	scanf ("%i", &senha);
	
	if(nota > 10 || nota < 0){
		printf("Informe um valor valido");
		printf("Informe uma nota entre 0 e 10:  ");
		scanf ("%i", &nota);
	}
	else{
		printf("valor valido");
	}
	
}
