#include<stdio.h >
main () {
	int resposta1, resposta2, resposta3, resposta4, resposta5, soma;
	printf("Telefonou para a vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta1);
	
	printf("Esteve no local do crime? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta2);
	
	printf("Mora perto da vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta3);
	
	printf("Devia para a vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta4);
	
	printf("Já trabalhou com a vítima? (sim 1) ou (nao 0)");
	scanf ("%i", &resposta5);
	
	soma = resposta1 + resposta2 + resposta3 + resposta4 + resposta5;
	
	
	
	if(soma == 2){	
		printf("Pessoa suspeita");
  		if(soma == 3 && soma == 4){	
			printf("Pessoa Cumplice");
			if(soma == 5){	
				printf("Assassino");
		}
	}
}
	else{
		printf("Pessoa nao suspeita");
	}
	/*if(soma == 2){	
		printf("Pessoa suspeita");
  	}
  	else{
		printf("Pessoa nao suspeita");
	}
	if(soma > 2 && soma < 4){	
		printf("Pessoa Cumplice");
	}
	else{
		printf("Pessoa nao suspeita");
	}
	if(soma == 5){	
		printf("Assassino");
	}
	else{
		printf("Pessoa nao suspeita");
	}*/

	/*if(resposta1 == resposta2 || resposta1 == resposta3 || resposta1 == resposta4 || 
	resposta1 == resposta5){
		printf("Pessoa suspeita");
	}
	else{
		printf("Pessoa nao suspeita");
	}
	
	if(resposta2 != resposta3 || resposta2 != resposta4 || resposta2 != resposta5){
		printf("Pessoa nao suspeita");
	}
	else{
		printf("Cumplice");
	}*/
	
	

}
