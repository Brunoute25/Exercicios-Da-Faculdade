/*4) Fa�a um programa em C que solicite ao usu�rio a sua idade.

Apto a tirar habilita��o*/
//Bruno Asbahr Silveira 
 //RA:0004/21-1 */
#include<stdio.h>
#include<locale.h>
main()
setlocale(LC_ALL,"");
char nome[20];
float idade;
printf("Digite seu nome: ");
scanf("%s",&nome);
fflush(stdin);
printf("Digite a data de idade: ");
scanf("%f",&idade);
if(idade>=18){
	printf("Muito bem vamos tirar sua CNH!");
	printf("\n Idade: %2.f",idade);
}
else{
	printf("\n Infelizmente n�o tem idade para tirar sua CNH");
}
