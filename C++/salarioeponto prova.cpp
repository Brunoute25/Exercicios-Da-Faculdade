#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario, bonus, pontuacao, salariofinal;
	printf("Entre com o salário: ");
	scanf("%f",&salario); 
	printf("\nEntre com a pontuacao: ");
	scanf("%f",&pontuacao);
	if(pontuacao>=1000){
		 bonus = 500;
		 salariofinal=salario+bonus;
		 printf("o salario final com o bonus foi de %.2f",salariofinal);
	}
	else if(pontuacao>=500 && pontuacao<=999){
		bonus = 300;
		salariofinal=salario+bonus;
		printf("o salario final com o bonus foi de %.2f",salariofinal);
	}
	else{
		salariofinal= salario;
		printf("o salario final com o bonus foi de %.2f",salariofinal);
	}
}
