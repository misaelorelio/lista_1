#include<stdio.h>
#include<math.h>
main(){	
	float numero, raiz, raizC, potencia, potencia2;
	printf("Digite um numero maior que 0: ");
	scanf("%f", &numero);
	potencia = pow (numero, 2);
	potencia2 = pow (numero, 3);
	raiz = sqrt (numero);
	raizC = cbrt (numero);
	printf("\n\n");
	printf("Resultado quadrado: %.3f\n", potencia);
	printf("Resultado cubico: %.3f\n", potencia2);
	printf("Resultado raiz quadrada: %.3f\n", raiz);
	printf("Resultado raiz cubica: %.3f", raizC);
}
	
