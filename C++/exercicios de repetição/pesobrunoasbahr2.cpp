#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	float peso, altura, imc;
	printf("Entre com seu peso: ");
	scanf("%f",&peso);
	printf("Entre com a altura: ");
	scanf("%f",&altura);
	imc=peso/(altura*altura);
		if(imc<=17){
	printf("Você está abaixo do Peso! Seu IMC é:%.2f",imc);
	}
		else if(imc>=17 && imc<=18.49){
	printf("Você está no Peso ideal! Seu IMC é:%.2f",imc);
	}
		else if(imc>= 18.5 && imc<=24.99){
	printf("Você está levemente acima do peso ideal! Seu IMC é:%.2f",imc);
    }
		else if(imc>=25 && imc<=29.99){
	printf("Você está acima do peso! Seu IMC é:%.2f",imc);		
	}
		else if(imc>=30 && imc<=34.99){
	printf("Você está com obesidade grau 1(leve)! Seu IMC é:%.2f",imc);		
	}
		else if(imc>=35 && imc<=39.99){
	printf("Você está com obesidade grau 2(severa)! Seu IMC é:%.2f",imc);		
	}
		else{
	printf("Você está com obesidade grau 3(morbida)! Seu IMC é:%.2f",imc);
	}
}
