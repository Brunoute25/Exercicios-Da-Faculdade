#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int matriz_a[5][5],matriz_b[5][5],matriz_soma[5][5];
	int i,j,u,p,k,s;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("entre com a matriz A\n");
			scanf("%i",&matriz_a[i][j]);
		}
	}
		for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("entre com a matriz B\n");
			scanf("%i",&matriz_b[i][j]);
		}
	} 
		for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			matriz_soma[i][j]=matriz_a[i][j]+matriz_b[i][j];
			printf("a soma das matrizes é de %i\n",matriz_soma[i][j]);
			if (j==2) printf("\n");
		}
	}
	printf("\n");
}
