#include<stdio.h>
main (){
	float media, nota1, nota2;
	printf("Digite a nota desse aluno: ");
	scanf("%f", &nota1);
	printf("Digite outra nota desse aluno: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	printf("Sua media: %.2f\n", media);
	if (media < 70 ){
		printf("Reprovado");
	}else if(media < 100 && media > 70 ){
		printf("Aprovado");
	}else if(media == 100){
		printf("Aprovado com distinçao");
	}

}
