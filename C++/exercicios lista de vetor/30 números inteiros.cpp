#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int vetor1[30];
	for(int i=0; i<=30; i++){
		printf("Entre com o valor: ");
		scanf("%i",&vetor1[i]);
	}
	for(int j=0; j<=30; j++){
		if(vetor1[j]%2==0){
		 printf("\no vetor é par: %i",vetor1[j]*2);
		}
	}
	printf("\n");
	for(int c=0; c<=30; c++){
	if(vetor1[c]%2==1){
	printf("\no vetor é impar: %i",vetor1[c]*3);
		}
	}
}
