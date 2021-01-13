#include<stdio.h>
main(){
	float altura1, altura2, homem, mulher;
	printf("Digite a altura do homem: ");
	scanf("%f", &altura1);
	printf("Digite a altura do mulher: ");
	scanf("%f", &altura2);
	
	homem = (72.7 * altura1) - 58;
	mulher = (62.1 * altura2) - 44.7;
	
	printf("O peso ideal homem: %.2f\tmulher: %.2f\n", homem, mulher);
}
