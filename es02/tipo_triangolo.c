#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	
	printf("Lati [separati da spazi]? ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n");
	if(a>b+c || b>a+c || c>a+b){
		/* not a triangle */
		printf("Questo non è un triangolo, buffone.\n");
	}else if (a==b || a==c || b==c){
		if(a==b && a==c) printf("Equilatero.\n");
		else printf("Isoscele.\n");
	}else {
		printf("Scaleno.\n");
	}
}