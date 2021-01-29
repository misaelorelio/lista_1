#include<stdio.h>
main (){
	char sexo ='F'; 
	printf("informe o sexo da pessoa: ");
	scanf("%c", &sexo);
	
		/*printf("Masculino: %c Feminino: %c\n", sexo, sexoo);*/
	if(sexo != 'f' && sexo != 'm'){
		printf("invalido");
	}if(sexo == 'm'){
		printf("Sexo Masculino");
	}else if(sexo == 'f'){
		printf("Sexo Feminino");
	}
}
