#include<stdio.h>
#include<math.h>
main(){
	float exponencial, potencia;
	printf("Informe o valor do raio: ");
	scanf("%f", &exponencial);
	potencia = pow (exponencial, 2);
	printf("Resultado do Raio: %.2f\n", potencia);
	printf("Area do circulo: %.2f", (potencia * 3.14));
}
