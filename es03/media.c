#include <stdio.h>

int main(){
	int somma=0, numero, i=0;
	
	do{
		printf("numero [termina con 0]? \n");
		scanf("%d", &numero);
		
		if(numero > 0)
		{
			somma+=numero;
			i++;
		}
		else if(numero<0)
			printf("\nquesto non è un numero maggiore di zero.\n");
		else
		{
			if (i==0)
				printf("sei un idiota\n");
			else{
				printf("\nsto facendo i tuoi conti….\n");
				printf("somma= %d;\nmedia= %.2f\n;", somma, (float) somma/i);
			}
		};
	}while(numero!=0);
}	