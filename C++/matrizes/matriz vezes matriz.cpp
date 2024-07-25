#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define elem 3
int main(){
	int matrizA[3][3],matrizB[3][3],matrizsoma[3][3];
	int i,j;
	printf("digite os elementos da matrixA\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrizA[i][j]);
		}
	}
	printf("digite os elementos da matrixB\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
			scanf("%d",&matrizB[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			matrizsoma[i][j] = matrizA[i][j] * matrizB[i][j];
	}
	for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%3d ", matrizsoma[i][j]);
        printf("\n");
    }
}
