#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float valor1, valor2, soma, sub, mult, div;
	int mod,x,y;
	printf("Entre com valor 1: ");
	scanf("%f",&valor1);
	printf("Entre com o valor 2: ");
	scanf("%f",&valor2);
	soma=valor1+valor2;
	printf("\nA soma foi: %.2f",soma);
	sub = valor1-valor2;
	printf("\nA subtra��o foi: %.f",sub);
	mult=valor1*valor2;
	printf("\nA multiplica��o foi: %.2f",mult);
	div=valor1/valor2;
	printf("\nA divis�o foi: %.2f",div);
	x=valor1;
	y=valor2;
	mod=x%y;
	printf("\nO resto da divis�o de x por y foi: %i",mod);
	
}
