//est� sempre gerando P toda vez que executa e mesmo colocando este valor 
//mostra como errado
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"");
	char letrausuario,letraroc,a;
	letraroc= rand()%26 + 'a'; //aleatorizar (de "a" at� "z")
	printf("%c",letraroc);
	printf("Informe uma letra de A at� Z: ");
	scanf("%i",&letrausuario);
	if (letrausuario==letraroc){
		printf("Parab�ns, voc� acertou a letra gerada!");
	} else {
		printf("Ah...n�o foi dessa vez.\n");
		printf("A letra gerada foi: %c.", letraroc);
	}	
}
