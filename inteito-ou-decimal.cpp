#include<stdio.h>
#include<math.h>
main(){
    
	float num;
	int aux;

	printf("Informe um numero: ");
	scanf ("%f", &num);
	
	aux = num;
	
	if(aux == num ) {
		printf ("Esse numero e inteiro ");
	}
	else {
		printf ("Esse numero e decimal");
	}
}
