//1. Construa um programa em C que efetue a leitura, soma e impressão do resultado entre duas matrizes inteiras que comportem 25 elementos. 
//Obs: utilizar três matrizes: matrizA, matrizB, matrizsoma. 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define elem 5  // <<--- quantidade de elementos de 0 + 5 = 25 posiçoes
int main(){
	int matrizA[5][5],matrizB[5][5],matrizsoma[5][5];
	int i,j;
	printf("digite os elementos da matrixA\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&matrizA[i][j]);
		}
	}
	printf("digite os elementos da matrixB\n");	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){	
			scanf("%d",&matrizB[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			matrizsoma[i][j] = matrizA[i][j] + matrizB[i][j];	
	}
	for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf("%5d ", matrizsoma[i][j]);
        printf("\n");
    }
}
