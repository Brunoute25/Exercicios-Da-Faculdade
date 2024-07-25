#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"");
	int vetor[10], multi;
	int i, j;
	printf("entre com o multi: %i",multi);
	scanf("%i",&multi);
	for(int i=0; i<=10; i++){
		printf("\n%i x %i = %i",i,multi,i*multi);
	}		
}
