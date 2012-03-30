#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARNUM 7

int main(){
    int numeri[CHARNUM];
    int i=0;
    int somma=0;
    int trovato=0;
    
    srand(time(NULL));
    
    for(i=0; i<CHARNUM; i++)
        scanf("%d", &numeri[i]);
    
    
    for(i=0; i<CHARNUM && trovato==0; i++){
        somma += numeri[i];
        if(numeri[i]<somma)
        {
            printf("%d è minore della somma di quelli che lo precedono. era in posizione %d\n", numeri[i], i);
            trovato=1;
        }
    }
    
    if(!trovato) printf("Sei uno stronzo.");
        
    printf("\n");
    
}