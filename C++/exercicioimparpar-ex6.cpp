//6) Faça um programa em C que verifique se o número digitado é par ou ímpar.
//Bruno Asbahr Silveira 
 //RA:0004/21-1
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int valor, res;
	printf("Entre com o valor: ");
	scanf("%i",&valor);
	res=valor%2;
	printf("Resto da divisão: %i",res);
	if(res==0){
	printf("\nO numero digitado é par: %i",valor);
	}
	else{
		printf("\nO numero digitado é impar: %i",valor);
	}
	}
	
