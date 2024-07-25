#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"");
	int idade;
	char letra;
	float nota;
	double medida;
	idade=20;
	letra='a';
	nota=7.55;
	medida=123.456789;
	printf("A letra inicial de seu nome %c. A idade do aluno é %i anos.\n",letra, idade);
	printf("A nota do aluno foi %.8f. A medida do projeto foi %.15lf", nota, medida);
	
}

