/*4) Faça um programa em C que solicite ao usuário a sua idade.

Apto a tirar habilitação*/
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
	printf("\n Infelizmente não tem idade para tirar sua CNH");
}
