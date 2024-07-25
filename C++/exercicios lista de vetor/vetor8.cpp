#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL, "");
	int vetora[4],vetorb[4],resultado[4];
	int a,b,c;
	for(int i=0;i<=4;i++){
		printf("entre com o valor de: vetorA\n");
		scanf("%i",&vetora[i]);
	}
	for(int i=0;i<=4;i++ ){
		printf("entre com o valor de: VetorB\n");
		scanf("%i",&vetorb[i]);
	}
	for(int i=0;i<=4;i++){
	resultado[i]=(vetora[i]==vetorb[i]) && (vetorb[i]!=vetora[i]);
	printf("%i é o vetor\n",resultado[i]);
	}
}
