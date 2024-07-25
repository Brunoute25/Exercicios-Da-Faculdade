#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario, bonus, bonificacao;
	printf("Entre com o salário: ");
	scanf("%f",&salario); //& indica o endereço de memória da variável
	printf("\nEntre com a bonificação: ");
	scanf("%f",&bonificacao);
	bonus=salario+bonificacao;
	printf("\nO salário do funcionário com o bônus foi: %.2f",bonus);
}
