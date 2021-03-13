#include<stdio.h>
main()
{
      float numero;
      int auxiliar;
      printf("Informe um numero\n");
      scanf("%f, &numero");
      auxiliar=numero;
      
	  if(auxiliar==numero){
      	printf("O numero e inteiro\n");
	  }
           
      else {
      	 printf("O numero e decimal\n");
	  }
}
