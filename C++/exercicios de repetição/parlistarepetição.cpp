#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int res,i,par;
	while(i<=30){
	i++;
	res=i%2;
	printf("\nResto da divis�o: %i",res);
	if(res==0){
	printf("\nO numero digitado � par: %i",i);
	par++;
	}
	else{
		printf("\nO numero digitado � impar: %i",i);
		}
	}
	printf("\no total de numero pares s�o: %i",par);
}
