//Fun��o � um bloco de c�digo que realiza terefas especificas
//Fun��o n�o recebe parametro e n�o retorna valor
//Toda fun��o void n�o retorna parametro(valores)

#include <stdio.h>
#include <locale.h>

void somar(){
	//Bloco da fun��o somar()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da soma de x+y � de: %.2f",x+y); 	
}
void subtrair(){
	//Bloco da fun��o subtrair()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da subtra��o de x-y � de: %.2f",x-y); 	
}
void multiplicar(){
	//Bloco da fun��o multiplicar()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da multiplica��o de x.y � de: %.2f",x*y); 	
}
void dividir(){
	//blobo da fun��o dividir()
	float x, y;
	printf("\nEntre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nO resultado da divis�o de x/y � de: %.2f",x/y); 
}
main(){
	setlocale(LC_ALL,"");
	//bloco da fun��o main.
	//chamadas de fun��es
	somar(); //chamada da fun��o somar()
	subtrair();
	multiplicar();
	dividir();
}
