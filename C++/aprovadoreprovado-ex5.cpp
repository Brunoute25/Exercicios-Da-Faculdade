//5) Fa�a um programa em C que calcule
// a situa��o de aprova��o ou reprova��o 
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
	printf("Entre com a frequ�cia: ");
	scanf("%f",&frequencia);
	media = (nota1+nota2)/2;
	if(media>=6){
	   printf("Aprovado");
	   printf("\nSua m�dia foi %.2f e sua frequ�ncia foi %.2f%%. Parab�ns!.",media);
}
	else{
	   printf("Aluno Reprovado");
	   printf("\nSua m�dia foi %.2f e sua frequ�ncia foi %.2f%% . Solicite Prova de Recupera��o",media, frequencia);
    }
}
