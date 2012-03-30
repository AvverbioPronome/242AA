#include <stdio.h>

main(){
	int a1, a2, risultato;
	printf('Operazione?');
	scanf("%d %c %d", &a1, &o, &a2);
	switch(o){
		case "+":
			risultato=a1+a2;
		break;
		case "-":
			risultato=a1-a2;
		break;
		case "*":
			risultato=a1*a2;
		break;
		case "/":
			risultato= a1/a2;
		break
		default:
			printf("E questa che operazione sarebbe?");return 100;
	}
	printf("Il risultato sarebbe %d\n", risultato); return 0;
}
