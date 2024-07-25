#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	char secreto, letra;
	secreto= rand()%26+'a';
	while(letra !=secreto){
		printf("entre com a letra: %c",letra);
		scanf("%c",&letra);	
	}
	printf("\nVocê acertou a letra: %c",letra);
}
