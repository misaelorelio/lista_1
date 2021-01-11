#include<stdio.h>
#include<math.h>
main(){
	float raio, potencia, area;
	printf("Informe o raio da circunferencia: ");
	scanf("%f", &raio);
	potencia = pow (raio,2);
	area = 3.14 * potencia;
	printf("Area do circulo: %.2f", area); 
}
