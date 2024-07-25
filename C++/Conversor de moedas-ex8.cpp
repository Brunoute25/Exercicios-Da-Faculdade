/*8) Faça um programa em C que permita que o usuário possa converter Real para outras moedas, da seguinte forma:

Caso 1: converter Real para Dólar Americano

Caso 2: converter Real para Euro

Caso 3: converter Real para Libra

Caso 4: converter Real para Peso

//Bruno Asbahr Silveira 
 //RA:0004/21-1 */
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float real, res;
	char op;
		printf("\n Digite A para converter real para Dolar Americano");
		printf("\n Digite B para converter real para Euro");
		printf("\n Digite C para converter real para Libra");
		printf("\n Digite D para converter real para Dolar Canadense");
		printf("\n Digite E para converter real para Peso Mexicano");
		printf("\n Entre com a opção: ");
		scanf("%c", &op);
		//fflush(stdin);//
		printf("\nDigite o valor em real a ser convertido: ");
		scanf("%f",&real);
		switch(op){
			case 'A':
				res=real*5.76;
				printf("\n A quantidade em Real convertida para Dolar Americano é de: %.2f",res);
				break;
			case 'B':
				res=real*6.81;
				printf("\n A quantidade em Real convertida para Euro é de: %.2f",res);
				break;
			case 'C':
				res=real*7.93;
				printf("\n A quantidade em Real convertida para Libra é de: %.2f",res);
				break;
			case 'D':
				res=real*4.56;
				printf("\n A quantidade em Real convertida para Dolar Canadense é de: %.2f",res);
				break;
			case 'E':
				res=real*0.28;
				printf("\n A quantidade em Real convertida para Peso Mexicano é de: %.2f",res);
				break;
				
	} 		
}
