//Fun��o � um bloco de c�digo que realizar tarefas espec�ficas.
//Fun��o que n�o recebe par�metro e n�o retorna valor
//Toda fun��o void n�o retorna par�metros(valores)
#include <stdio.h>
#include <locale.h>

void somar(){
    //bloco da fun��o somar()
    printf("\nBem vindo a Fun��o SOMAR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da soma de x + y �: %.2f",x+y);
}
void subtrair(){
    //bloco da fun��o subtrair()
    printf("\n-----------------------------.");
    printf("\n\nBem vindo a Fun��o SUBTRAIR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da subtra��o de x - y �: %.2f",x-y);
}
void multiplicar(){
    //bloco da fun��o multiplicar()
    printf("\n-----------------------------.");
    printf("\n\nBem vindo a Fun��o MULTIPLICAR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da multiplica��o de x * y �: %.2f",x*y);
}
void dividir(){
    //bloco da fun��o dividir()
    printf("\n-----------------------------.");
    printf("\n\nBem vindo a Fun��o DIVIDIR.");
    float x, y;
    printf("\nEntre com o valor de x: ");
    scanf("%f",&x);
    printf("Entre com o valor de y: ");
    scanf("%f",&y);
    printf("O resultado da divis�o de x / y �: %.2f",x/y);
}
main(){
    //bloco da fun��o main.
    //chamadas de fun��es.
    somar();
    subtrair();
    multiplicar();
    dividir();
}
