/*7 � Crie um programa em C que leia um vetor de 30 n�meros inteiros e gere um 
segundo vetor cujas posi��es pares
s�o o dobro do vetor original e as �mpares o +triplo.*/
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
		 printf("\no vetor � par: %i",vetor1[j]*2);
		}
	}
	printf("\n");
	for(int c=0; c<=5; c++){
	if(vetor1[c]%2==1){
	printf("\no vetor � impar: %i",vetor1[c]*3);
		}
	}
}
