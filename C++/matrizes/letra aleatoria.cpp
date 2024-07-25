#include<stdio.h>
main(){
	int matriz_a[4][4],matriz_b[4][4],matriz_soma[4][4];
	int i,j,u,p,k,s;
	for(i=0; i<=3; i++){
		for(j=0; j<=3; j++){
			printf("entre com a matriz A");
			scanf("%i",&matriz_a[i][j]);
		}
	}
		for(u=0; u<=3; u++){
		for(p=0; p<=3; p++){
			printf("entre com a matriz B");
			scanf("%i",&matriz_b[u][p]);
		}
	}
	matriz_soma[k][s]=matriz_a[i][j]+matriz_b[u][p];
		for(k=0; k<=3; k++){
		for(s=0; s<=3; s++){
			printf("a soma das matrizes é de ",matriz_soma[k][s]);
		}
	}
}
