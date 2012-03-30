#include <stdio.h>
#include <math.h>

int main(){
	int somma=0, numero, peso=0, media;
	int i=0;
	float scimmia;
	
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
	
	media= somma/i;
	
	printf("La sfera di cristallo chiede quanti crediti vale il tuo prossimo esame...");
	scanf("%d", &numero);
	i+=numero;
	
	scimmia = (float)(ceil(media)*i - somma)/numero;
	
	if(numero > 30)
		printf("Mi dispiace tanto, morirai.");
	else
		printf("Dovrai prendere: %.0f\n", ceil(scimmia));
	
}	