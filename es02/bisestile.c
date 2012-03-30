#include <stdio.h>

int main(){
	int anno;
	
	printf("Anno?"); scanf("%d", &anno); printf("\n");
	
	if (
		(anno > 1584) && 
		((anno % 4 == 0) && (!(anno % 100 == 0) || (anno % 400 == 0)))
	){
		printf("Bisestile.\n");
	}else{
		printf("No.\n");
	}
}