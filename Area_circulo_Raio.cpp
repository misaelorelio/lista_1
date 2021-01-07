#include<stdio.h>
#include<math.h>
main(){
	float exponencial, potencia;
	printf("Informe o valor do raio: ");
	scanf("%f", &exponencial);
	potencia = pow (exponencial, 2);
	printf("Resultado do Raio: %f\n", potencia);
	printf("Area do circulo: %f", (potencia * 3.14));
}
