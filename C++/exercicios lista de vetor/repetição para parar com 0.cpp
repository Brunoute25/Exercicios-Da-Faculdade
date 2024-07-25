#include <stdio.h>
#include <stdlib.h>
#include <conio.h>// função para o getche()o que o usuario digitar não irá aparecer na tela
main(){

       int numeros,i,contapares=0,contanum=0;
       double mediapar;
	   do{
        printf("Digite numeros: ");
        scanf("%d",&numeros);

        if (numeros % 2 == 0){
        contapares += numeros;
        contanum++;
       }
    }while(numeros !=0);

    contanum--;
    mediapar = (contapares/contanum);

    printf("\n\n");
    printf("\t\t============ RESULTADOS ============== \n");
    printf("\t\tSoma dos Pares .....: %d \n",contapares);
    printf("\t\tQuantida pares .....: %d \n",contanum);
    printf("\t\tMedia dos pares ....: %.2lf \n",mediapar);
    printf("\t\t============ RESULTADOS ============== \n");
    printf("\n\n");
    getche();
};

