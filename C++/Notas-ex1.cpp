/*1) Fa�a um programa em C que leia duas notas, calcule
 a m�dia e mostre a m�dia ao usu�rio.*/
 //Bruno Asbahr Silveira 
 //RA:0004/21-1
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
    float nota1, nota2, media;
    printf("Entre com a primeira nota: ");
    scanf("%f",&nota1);
    printf("\nEntre com a segunda nota: ");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    printf("\nA m�dia do aluno foi de: %.2f",media);
}

