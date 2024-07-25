#include<stdio.h>
#include<stdlib.h>
main(){
	int matrizcidades[7][7]={
 {0,2,11,6,15,11,1},
 {2,0,7,12,4,2,15},
 {11,7,0,11,8,3,13},
 {6,12,11,0,10,2,1},
 {15,4,8,10,0,5,13},
 {11,2,3,2,5,0,14},
 {1,15,13,1,13,14,0}};
	int tempoviagem = 0,origem,destino;
	do{
	printf("Entre com a Cidade de saida: \n");
	scanf("%i",&origem);
	printf("Entre com o Destino: \n");
	scanf("%i",&destino);
	if(origem!=destino){
		tempoviagem= matrizcidades[origem][destino];
		printf("\nO tempo de viagem será: %i\n\n",tempoviagem);
	}
	}while(origem!=destino);
}
