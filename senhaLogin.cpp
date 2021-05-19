#include<stdio.h >
main () {		
	
	char login [10];
	char senha [10];
	int teste;
	printf("Informe seu login: ");
	scanf ("%s", &login);
	
	printf("Informe sua senha: ");
	scanf ("%s", &senha);
	
	if("%s", login != "%s", senha){
		printf("Correto:%s%s", login, senha);
	}
	else{
		printf("Errado");
	}
}
