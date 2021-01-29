#include<stdio.h>
main (){
	char letra = 'a';
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	if( letra != 'a' && letra !='e' && letra !='i' && letra !='o' && letra!='u'){
		printf("Essa letra e uma consoante!");
	}else{
		printf("Essa letra e uma vogal");
	}


}

