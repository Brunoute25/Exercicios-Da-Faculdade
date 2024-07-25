//está sempre gerando P toda vez que executa e mesmo colocando este valor 
//mostra como errado
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"");
	char letrausuario,letraroc,a;
	letraroc= rand()%26 + 'a'; //aleatorizar (de "a" até "z")
	printf("%c",letraroc);
	printf("Informe uma letra de A até Z: ");
	scanf("%i",&letrausuario);
	if (letrausuario==letraroc){
		printf("Parabéns, você acertou a letra gerada!");
	} else {
		printf("Ah...não foi dessa vez.\n");
		printf("A letra gerada foi: %c.", letraroc);
	}	
}
