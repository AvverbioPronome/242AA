#include <stdio.h>

int main(){
	int input;
	
	printf("Dammi un numero, utonto! ::");
	scanf("%d", &input);
	
	printf("Multiplo");
	if (input % 3 == 0) printf(" di 3");
	if (input % 5 == 0) printf(" di 5");
	if (input % 7 == 0) printf(" di 7");
	
	if (!((input % 3 == 0)||(input % 5 == 0)||(input % 7 == 0)))
	printf(" di niente");
	
	printf(".\n");
	
}