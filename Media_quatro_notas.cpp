#include<stdio.h>
main(){
	float cont;
	float nota, media, resultado;
	resultado = 0;
	for(cont = 0; cont < 4; cont++ ){
		printf("Inserir notas: ");
		scanf("%f", &nota);
		printf("\n");
		resultado = resultado + nota;
		media = resultado / 4;
	}
		printf("Media ponderada: %.2f", media);
	

}
