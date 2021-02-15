#include<stdio.h>
#include<math.h>
main (){
	float a, b, c, x1, x2, delta;
	
	printf("Digite valor A: ");
	scanf("%f", &a);
	printf("Digite valor B: ");
	scanf("%f", &b);
	printf("Digite valor C: ");
	scanf("%f", &c);
	
	delta = (b*b)-(4*a*c);
	
	/*x1 = (-b+ (sqrt((b*b)-(4*a*c)))) / (2*a);
	printf("x1 %.2f ", x1);
	x2 = (-b- (sqrt((b*b)-(4*a*c)))) / (2*a);
	printf("x2 %.2f ", x2);	*/
	
	if( a == 0 ){
		printf("Programa encerrado: %f", a);
	}
	else if( delta < 0)	{
		printf("Programa encerrado delta NEGATIVO: %f", delta);
	}
	else if(delta == 0){
		printf("Resultado 0");
	}
	else if(delta > 0){
		printf("X1 = %.2f\n", (-b+ (sqrt((b*b)-(4*a*c)))) / (2*a) );
		printf("X2 = %.2f", (-b - (sqrt((b*b)-(4*a*c)))) / (2*a));
	}
}
