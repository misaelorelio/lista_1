#include<stdio.h >
main () {
	float frutas, kg, morango, maca;
	printf("Quantos quilos de fruta? ");
	scanf ("%f", &kg);
	
	printf("Morango - 1 ou Maca - 2 ");
	scanf ("%f", &frutas);

	

	if(frutas == 1 && kg <= 5){
		morango = kg * 2.5;
		printf("Preco da sua compra R$ %.2f\n", morango);
	}
}
