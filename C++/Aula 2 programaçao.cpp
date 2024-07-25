#include<stdio.h>

main()
{
	int evento;
	char corrida;
    float tempo;
	
	evento = 5;
	corrida = 'C';
	tempo = 27.25;
	
	printf("O tempo vitorioso na eliminatoria %i da competicão %c foi %f",evento,corrida,tempo);
	
}

/*
%i %d - leitura/escrita de um inteiro ou decimal
%c - leitura/escrita de um carater
%f - leitura/escrita de um float
%Lf - leitura/escrita de um double