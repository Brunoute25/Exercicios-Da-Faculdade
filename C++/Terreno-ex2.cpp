/*2) Fa�a um programa em C que calcule a �rea de um terreno.
 O usu�rio deve entrar com a largura e o comprimento do terreno.*/
 //Bruno Asbahr Silveira 
 //RA:0004/21-1
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
    float largura, comprimento, area;
    printf("Entre com a largura: ");
    scanf("%f",&largura);
    printf("\nEntre com o comprimento: ");
    scanf("%f",&comprimento);
    area=(largura*comprimento);
    printf("\nA ar�a do terreno foi de: %.2f m2",area);
}

