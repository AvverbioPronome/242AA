#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int i=0;
    int scimmia[10]={0};
    int dato=0, vecchiodato;
    
    do{
        vecchiodato=dato;
        scanf("%d", &dato);
        scimmia[dato]++;
    }while( !(dato==0 && vecchiodato==0));
    
    for(i=0; i<10; i++){
        printf("%d: presente %d volte\n", i, scimmia[i]);
    }
}