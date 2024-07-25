#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,contador;
	while(i<=20){
		printf("\nnumero contado: %i",i);
		printf("\n------------------");
		i++;
		printf("\nmultiplicador: %i",i*2);
	}
}
