//Função é um bloco de código que realizar tarefas específicas.
//Função que não recebe parâmetro e não retorna valor
//Toda função void não retorna parâmetros(valores)
#include <stdio.h>
#include <locale.h>

void somar(){
    //bloco da função somar()
    printf("\nBem vindo a Função SOMAR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da soma de x + y é: %.2f",x+y);
}
void subtrair(){
    //bloco da função subtrair()
    printf("\n-----------------------------.");
    printf("\n\nBem vindo a Função SUBTRAIR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da subtração de x - y é: %.2f",x-y);
}
void multiplicar(){
    //bloco da função multiplicar()
    printf("\n-----------------------------.");
    printf("\n\nBem vindo a Função MULTIPLICAR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da multiplicação de x * y é: %.2f",x*y);
}
void dividir(){
    //bloco da função dividir()
    printf("\n-----------------------------.");
    printf("\n\nBem vindo a Função DIVIDIR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da divisão de x / y é: %.2f",x/y);
}
main(){
    //bloco da função main.
    //chamadas de funções.
    somar();
    subtrair();
    multiplicar();
    dividir();
}
