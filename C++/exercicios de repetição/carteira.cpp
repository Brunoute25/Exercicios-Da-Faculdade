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
    printf("\nInformações da %ia. Carteira",i+1);
    printf("\nEntre com o rg: ");
    scanf("%i",&c[i].rg);
    printf("\nEntre com o cpf: ");
    scanf("%i",&c[i].cpf);
    printf("\nEntre com a habilitação: ");
    scanf("%i",&c[i].hab);
    printf("\nEntre com o cartão crédito: ");
    scanf("%i",&c[i].cartcred);
    printf("\nEntre com o cartão débito: ");
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
    printf("\nInformações da %ia. Carteira",indice+1);
    printf("\nRG: %i",c[indice].rg);
    printf("\nCPF: %i",c[indice].cpf);
    printf("\nHabilitação: %i",c[indice].hab);
    printf("\nCartão de Crédito: %i",c[indice].cartcred);
    printf("\nCartão de Débito: %i",c[indice].cartdeb);
    printf("\nDinheiro: %.2f",c[indice].dinheiro);
    printf("\nNome: %s",c[indice].nome);
  }
    else{
        printf("\nÍndice indisponível");
    }
}
main(){
    setlocale(LC_ALL, "");
    int op=0, i=0, indice;
    while(op!=3){
        printf("\nDigite 1 para Cadastrar");
        printf("\nDigite 2 para Exibir");
        printf("\nDigite 3 para Sair");
        printf("\nEntre com a opção: ");
        scanf("%i",&op);
        switch(op){
            case 1: i = cadastra(i); break;
            case 2: printf("\nDigite o índice a ser exibido: ");
                    scanf("%i",&indice);
                    exibe(indice);
                    break;
            case 3: exit(1);
        }
    }
}
