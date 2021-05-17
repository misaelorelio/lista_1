#include<stdio.h >
main () {
	
	
	char login [10];
	char senha [10];
	
	printf("Informe seu login: ");
	scanf ("%s", &login);
	
	printf("Informe sua senha: ");
	scanf ("%s", &senha);
	
	
	if(("%s",login ) == ("%s",senha)){
		printf("Favor colocar dados diferentes!%s%s", login, senha);
	}
	else{
		printf("Dados cadastrados com sucesso %s", login);
	}
}
