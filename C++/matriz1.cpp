#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"");
	int matriz[3][3];
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++ ){
			printf("Entre com a valor: ");
			scanf("%i",&matriz[i][j]);
			
		}
	}
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++ ){
			printf("\nmatriz %i %i: %i",i,j,matriz[i][j]);
			
		}
	}
}
