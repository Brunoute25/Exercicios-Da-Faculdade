#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int a, b, auxiliar, i;
	a=0;
	b=1;
	printf("\nSérie de Fibonacci: \n\n");
	printf("%d\n", b);
	for(i=0;i<20;i++){
		auxiliar= a+b;
		a= b;
		b= auxiliar;
		printf("%d\n",auxiliar);
	}
}
