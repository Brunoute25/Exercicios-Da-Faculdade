#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int valor1, valor2, resultado;
	printf("Entre com um valor: ");
	scanf("%i",&valor1);
	printf("Entre com outro valor: ");
	scanf("%i",&valor2);
	if(valor1>valor2){
		printf("%i valor maior",valor1);
	}
	else if(valor1==valor2){
	   printf("%i valores são iguais",valor2);
	}
	else{
		printf("%i valor maior",valor2);
	}
}
