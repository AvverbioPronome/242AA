#include <stdio.h>
#include <math.h>

main(){
	int a,b;
	int r_perim, r_area;
	float q_eqp_area;
	float q_eqa_perim;
	
	printf("Lati del rettangolo separati da uno spazio:");
	scanf("%d %d", &a, &b);
	if (a<0 || b<0){
		
		if (a<b) b=a;
		
		printf("Muori, bastardo. %d non è un valore valido per il lato di un rettangolo.\n", b);
		return 1;
		
	}else{
		
		/* Area del rettangolo */
		r_area = a*b;
		
		printf("Area dela rettangolo: %d\n", r_area);
		
		/* Area del quadrato equiperimetrale: */
		r_perim = 2*(a+b);
		q_eqp_area = pow(r_perim/4, 2);
		
		printf("Area del quadrato equiperimetrale: %f\n", q_eqp_area);
	
		/* Perimetro del quadrato equivalente */
		q_eqa_perim = 4*pow(r_area, 0.5);
		
		printf("Perimetro del quadrato equivalente: %f\n", q_eqa_perim);
		return 0;
	}
}
