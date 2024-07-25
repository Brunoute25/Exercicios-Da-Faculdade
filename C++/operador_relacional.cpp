#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "");
	int x = 3;
	int y = 3;
	int result;
	result = (x < y) && (x != y);
	printf("Resultado: %i",result);
	  //1 é true e 0 é false //
}
