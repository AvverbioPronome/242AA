#include <stdio.h>
#include <math.h>

int main(){
	int base, altezza;
	float area, perimetro;
	
	printf("base? "); scanf("%d", &base);
	printf("altezza? "); scanf("%d", &altezza);

	area = base*altezza/2;
	perimetro= base + 2*sqrt( pow(altezza,2) + pow(base/2, 2) );
	
	printf("area= %4f\n", area);
	printf("perimetro= %4f\n", perimetro);
}