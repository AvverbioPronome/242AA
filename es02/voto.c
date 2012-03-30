#include <stdio.h>

int main(){
	int voto;
	
	scanf("%d", &voto);
	
	if(voto<0)
		printf("Eh? Così scarso?");
	else if (voto < 18)
		printf("Insufficiente.");
	else if (voto < 21)
		printf("Sufficiente.");
	else if (voto <= 24)
		printf("Buono.");
	else if (voto <= 30)
		printf("Ottimo.");
	else
		printf("Oh OH oh, abbiamo un genio qui!");
		
printf("\n");
}