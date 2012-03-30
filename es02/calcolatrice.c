#include <stdio.h>

int main(){
	int a, b, r;
	char s;
	
	scanf("%d %c %d", &a, &s, &b);
	
	switch(s){
		case '+':
			r=a+b; printf("%d %c %d = %d", a, s, b, r);
			break;
		case '-':
			r=a-b; printf("%d %c %d = %d", a, s, b, r);
			break;
		case '*':
			r=a*b; printf("%d %c %d = %d", a, s, b, r);
			break;
		case '/':
			r=a/b; printf("%d %c %d = %d", a, s, b, r);
			break;
		default:
			printf("Muori.");		
	};
	printf("\n");
}