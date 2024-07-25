#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"");
	float notas[5], mediageral=0;
	for(int i=0; i<=5; i++){
		printf("Entre com a nota do aluno %i: ",i);
		scanf("%f",&notas[i]);
	}
	for(int i=0; i<=5; i++){
		printf("\nNota do aluno %i: %.2f",i,notas[i]);
		mediageral= mediageral + notas[i];
	}
	printf("A média geral dos aluno foi: %.2f",mediageral/5);
}
