#include<stdio.h>
main (){
	float internet, download, velocidade;
	printf("Qual tamanho desse arquivo Mb? ");
	scanf("%f", &download);
	printf("Informe velocidade da sua internet Mbps: ");
	scanf("%f", &internet);
	velocidade = (download / internet) / 60;
	printf("Seu download sera concluido em minutos: %.2f", velocidade);


}
