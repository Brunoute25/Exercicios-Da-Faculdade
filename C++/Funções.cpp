//Função é um bloco de código que realiza terefas especificas
//Função não recebe parametro e não retorna valor
//Toda função void não retorna parametro(valores)

#include <stdio.h>
#include <locale.h>

void somar(){
	//Bloco da função somar()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da soma de x+y é de: %.2f",x+y); 	
}
void subtrair(){
	//Bloco da função subtrair()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da subtração de x-y é de: %.2f",x-y); 	
}
void multiplicar(){
	//Bloco da função multiplicar()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da multiplicação de x.y é de: %.2f",x*y); 	
}
void dividir(){
	//blobo da função dividir()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da divisão de x/y é de: %.2f",x/y); 
}
main(){
	setlocale(LC_ALL,"");
	//bloco da função main.
	//chamadas de funções
	somar(); //chamada da função somar()
	subtrair();
	multiplicar();
	dividir();
}
