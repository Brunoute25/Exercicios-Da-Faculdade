//7) Fa�a um programa em C, ap�s a convers�o de graus Celsius para Fahrenheit,
// apresente a situa��o da temperatura corporal, sendo temperatura est� elevada
//Bruno Asbahr Silveira 
 //RA:0004/21-1
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float valor1, valor2;
	printf("Entre com a temperatura em celsius: ");
	scanf("%f",&valor1);
	valor2=(valor1*1.8)+32;
	printf("\nSua Temperatura em fahrenheit � de: %.1f", valor2);
	if(valor2>=104){
		printf("\nProcure um medico imediatamente");
		
	}
	else;{
		printf("\nRecomenda-se ir para um medico");
	}
}
