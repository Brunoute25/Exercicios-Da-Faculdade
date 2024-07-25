/*7 – Crie um programa em C que leia um vetor de 30 números inteiros e gere um 
segundo vetor cujas posições pares
são o dobro do vetor original e as ímpares o +triplo.*/
#include<stdio.h>
#include<locale.h>
main(){
	int vetor1[30];
	for(int i=0; i<=30; i++){
		printf("Entre com o valor: ");
		scanf("%i",&vetor1[i]);
	}
		printf("\n----------------------------------");
	for(int i=0; i<=30; i++){
		printf("\nvalor multiplicado por 2 resultou em: %i",vetor1[i]*2);
	}
		printf("\n----------------------------------");
		for(int i=0; i<=30; i++){
		printf("\nvalor multiplicado por 3 resultou em: %i",vetor1[i]*3);
	}
}
