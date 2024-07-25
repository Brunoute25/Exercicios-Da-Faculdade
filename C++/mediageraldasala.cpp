#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"");
	int vetor[10], maior=0, menor=0, mediageral=0;
	int i;
	for(int i=0; i<10; i++){
		printf("Entre com o valor %i: ",i);
		scanf("%i",&vetor[i]);
		menor = vetor[0];
		maior = vetor[0];
		mediageral=mediageral+vetor[i];
	}
	for(i=0; i<10; i++){
		if(vetor[i]<menor){
			menor=vetor[i];
		}
		if(vetor[i]>maior){
			maior=vetor[i];
		}
	}
	printf("\nMenor valor: %i",menor);
	printf("\nMaior valor: %i",maior);
	printf("\nMedia geral: %i",mediageral/i);
}
