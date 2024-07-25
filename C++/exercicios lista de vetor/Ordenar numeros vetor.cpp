#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,j,a,n,numero[30];
	printf("Entre com o valor de N \n");
	scanf("%d", &n);
	printf("Entre com os numeros \n");
	for(i=0;i<n;++i)
    scanf("%d",&numero[i]);
	for(i=0;i<n;++i){
    for(j=i+1;j<n;++j){
        if(numero[i]>numero[j]){
    a=numero[i];
    numero[i]=numero[j];
    numero[j]=a;
        	}
    	}
	}
printf("os numeros de acordo com a ordem crescente irão aparecer abaixo \n");
for (i=0;i<n;++i)
    printf("%d\n",numero[i]);
}
