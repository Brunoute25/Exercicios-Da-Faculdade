#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario, bonus, bonificacao;
	printf("Entre com o sal�rio: ");
	scanf("%f",&salario); //& indica o endere�o de mem�ria da vari�vel
	printf("\nEntre com a bonifica��o: ");
	scanf("%f",&bonificacao);
	bonus=salario+bonificacao;
	printf("\nO sal�rio do funcion�rio com o b�nus foi: %.2f",bonus);
}
