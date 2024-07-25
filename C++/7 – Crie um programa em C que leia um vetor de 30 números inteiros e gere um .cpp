/*7 – Crie um programa em C que leia um vetor de 30 números inteiros e gere um 
segundo vetor cujas posições pares
são o dobro do vetor original e as ímpares o +triplo.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int vetor1[5];
	for(int i=0; i<=5; i++){
		printf("Entre com o valor: ");
		scanf("%i",&vetor1[i]);
	}
	for(int j=0; j<=5; j++){
		if(vetor1[j]%2==0){
		 printf("\no vetor é par: %i",vetor1[j]*2);
		}
	}
	printf("\n");
	for(int c=0; c<=5; c++){
	if(vetor1[c]%2==1){
	printf("\no vetor é impar: %i",vetor1[c]*3);
		}
	}
}
