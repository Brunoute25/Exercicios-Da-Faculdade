//6) Fa�a um programa em C que verifique se o n�mero digitado � par ou �mpar.
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
	printf("Resto da divis�o: %i",res);
	if(res==0){
	printf("\nO numero digitado � par: %i",valor);
	}
	else{
		printf("\nO numero digitado � impar: %i",valor);
	}
	}
	
