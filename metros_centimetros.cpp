//Atividade 5:
#include<stdio.h>
main(){
	float metro, centimetro;
	printf("Insira uma medida em metros: ");
	scanf("%f", &metro);
	centimetro = metro * 100;
	printf("O valor da medida em centimetros: %.3f", centimetro);
}

