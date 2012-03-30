#include <stdio.h>

int main(){
	int somma=0, numero, peso=0, i=0;
	
	do{
		printf("inserisci voto:crediti, termina inserendo zero.\n");
		scanf("%d:%d", &numero, &peso);
		
		if(numero > 0 && numero <= 30 && peso > 0)
		{
			somma+=numero*peso;
			i+=peso;
		}
		else if(numero<0 || numero > 30)
			printf("Grasse risate. ahah.\n");
		else
		{
			if (i==0)
				printf("sei un idiota\n");
			else{
				printf("\nsto facendo i tuoi conti….\n");
				printf("somma= %d;\nmedia= %.2f;\n", i, (float) somma/i);
			}
		};
	}while(numero!=0);
	
}	