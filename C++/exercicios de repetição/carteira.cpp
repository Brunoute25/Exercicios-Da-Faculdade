#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct carteira{
    int rg, cpf, hab, cartcred, cartdeb;
    char nome[30], endereco[50];
    float dinheiro;
}; struct carteira c[2];
int cadastra(int i){
    if(i < 2){
    printf("\nInforma��es da %ia. Carteira",i+1);
    printf("\nEntre com o rg: ");
    scanf("%i",&c[i].rg);
    printf("\nEntre com o cpf: ");
    scanf("%i",&c[i].cpf);
    printf("\nEntre com a habilita��o: ");
    scanf("%i",&c[i].hab);
    printf("\nEntre com o cart�o cr�dito: ");
    scanf("%i",&c[i].cartcred);
    printf("\nEntre com o cart�o d�bito: ");
    scanf("%i",&c[i].cartdeb);
    printf("\nEntre com o dinheiro: ");
    scanf("%f",&c[i].dinheiro);
    printf("\nEntre com o nome: ");
    scanf("%s",c[i].nome);
    }
    else{
        printf("\nCarteira cheia");
    }
    return(i+1);
}
void exibe(int indice){
    if(indice < 2){
    printf("\nInforma��es da %ia. Carteira",indice+1);
    printf("\nRG: %i",c[indice].rg);
    printf("\nCPF: %i",c[indice].cpf);
    printf("\nHabilita��o: %i",c[indice].hab);
    printf("\nCart�o de Cr�dito: %i",c[indice].cartcred);
    printf("\nCart�o de D�bito: %i",c[indice].cartdeb);
    printf("\nDinheiro: %.2f",c[indice].dinheiro);
    printf("\nNome: %s",c[indice].nome);
  }
    else{
        printf("\n�ndice indispon�vel");
    }
}
main(){
    setlocale(LC_ALL, "");
    int op=0, i=0, indice;
    while(op!=3){
        printf("\nDigite 1 para Cadastrar");
        printf("\nDigite 2 para Exibir");
        printf("\nDigite 3 para Sair");
        printf("\nEntre com a op��o: ");
        scanf("%i",&op);
        switch(op){
            case 1: i = cadastra(i); break;
            case 2: printf("\nDigite o �ndice a ser exibido: ");
                    scanf("%i",&indice);
                    exibe(indice);
                    break;
            case 3: exit(1);
        }
    }
}
