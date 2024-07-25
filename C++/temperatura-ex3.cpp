//3) Faça um programa em C que a partir do grau Celsius 
//converta para grau Fahrenheit.
//Use: F = (C * 1.8) + 32.
//Bruno Asbahr Silveira 
 //RA:0004/21-1
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
    float celsius, fahrenheit;
    printf ("Entre com a escala de temperatura celsius: ");
    scanf ("%f",&celsius);
    fahrenheit=(celsius*1.8)+32;
    printf ("A escala convertida de celsius para fahrenheit é de: %.1f F", fahrenheit);
}
