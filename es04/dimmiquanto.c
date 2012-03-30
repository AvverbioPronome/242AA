#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARNUM 100

int main(){
    char caratteri[CHARNUM];
    int i=0;
    char enne;
    int cnt=0;
    
    srand(time(NULL));
    
    for(i=0; i<CHARNUM; i++)
        caratteri[i]=((rand()%26)+'a');
    
    scanf("%c", &enne);
    
    for(i=0; i<CHARNUM; i++)
        if(caratteri[i] == enne) 
            cnt++;
            
    switch(cnt){
        case 0:
            printf("Sei uno stronzo.\n");
            break;
        default:
            printf("Non sei uno stronzo: il tuo carattere compare %d volte\n", cnt);
            break;
    }
            
    printf("\n");
    
}