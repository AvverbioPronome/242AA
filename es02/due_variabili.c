#include <stdio.h>
#include <math.h>

int main(){
	float x, y, somma, differenza, prodotto, media;
	
	x=5.69;
	y=2.56;
	
	somma = x+y;
	differenza = x-y;
	prodotto = x*y;
	media = somma/2;
	
	printf("x\ty\tsomm\tdiff\tprod\tmedi\n");
	printf("%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t\n", x, y, somma, differenza, prodotto, media);
}