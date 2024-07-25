//5) Faça um programa em C que calcule
// a situação de aprovação ou reprovação 
//Bruno Asbahr Silveira 
 //RA:0004/21-1
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float nota1, nota2, media, frequencia;
	printf("Entre com a nota 1: ");
	scanf("%f",&nota1);
	printf("Entre com a nota 2: ");
	scanf("%f",&nota2);
	printf("Entre com a frequêcia: ");
	scanf("%f",&frequencia);
	media = (nota1+nota2)/2;
	if(media>=6){
	   printf("Aprovado");
	   printf("\nSua média foi %.2f e sua frequência foi %.2f%%. Parabéns!.",media);
}
	else{
	   printf("Aluno Reprovado");
	   printf("\nSua média foi %.2f e sua frequência foi %.2f%% . Solicite Prova de Recuperação",media, frequencia);
    }
}
