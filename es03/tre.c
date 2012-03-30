#include <stdio.h>
#include <math.h>

long fattoriale(int i){
	switch(i){
		case 0:
			return 1;
			break;
		default:
			return i*fattoriale(i-1);
	}
}

int main(){
	printf("il prodotto dei primi dieci multipli di 3 è %15.0f\n", pow(3, 10)*fattoriale(10));
}