#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float nota1, nota2, media, mediageral=0;//acumulador
	int x=0; //contador
	while(x<10){//repetir o calculo da media para 10 alunos
	printf("\nAluno %i",x);
	printf("\nEntre com a nota 1: ");
	scanf("%f",&nota1);
	printf("\nEntre com a nota 2: ");
	scanf("%f",&nota2);
	media= (nota1+nota2)/2;
	if(media>=6){
		printf("\nSua média é %.2f. Aprovado!",media);
	}
	else{
		printf("\nSua média é %.2f. Reprovado!",media);
	}
	mediageral= mediageral+media;// mediageral está acumulando as medias
	x++;//contador (incrementando)
	}
	printf("\nA média geral da sala foi: %.2f",mediageral/10);
}
