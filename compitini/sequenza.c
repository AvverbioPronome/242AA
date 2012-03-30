#include <stdio.h>

int main(){
	char e;
	int lettere=0, numeri=0, i=0; /* contatori */
	int fletter=-1, fnum=-1, lanum=-1;
	int fcharon=1, fnumon=1;
	
	do{
		e = getchar();
		if((e >= 'a' && e <= 'z')||(e >= 'A' && e <= 'Z')){
			lettere++;
			if(fcharon){fcharon=0; fletter=i;};
			lanum=i;
		}else if(e>='0' && e<='9'){
			numeri++;
			if(fnumon){fnumon=0; fnum=i;};
			lanum=i;
		}
		i++;
	}while(e != '\n');
	i--;
	printf("In questa sequenza ci sono:\n%d valori\n %d lettere\n%d numeri\n%d schifezze.\n", i, lettere, numeri, i - numeri - lettere);
	printf("L'ultimo carattere alfanumerico e` in posizione %d\n", lanum);
	printf("Il primo numero e la prima lettera sono rispettivamente in %d e %d", fletter, fnum);
}
