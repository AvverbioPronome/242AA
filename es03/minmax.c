#include <stdio.h>

int main(){
	int max=0, min=0, numero=0;
	int primo=1;
	
	do{
		scanf("%d", &numero);
		
		if(primo){
			min=max=numero;
			primo=0;
			};
		
		if (numero<min && numero!=0)
			min=numero;
			
		if (numero>max && numero!=0)
			max=numero;
			
	}while(numero!=0);
		
	printf("minimo: %d\nmassimo: %d\n", min, max);

}