#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARNUM 100

int main(){
    char caratteri[CHARNUM];
    int i=0;
    int enne;
    
    srand(time(NULL));
    
    for(i=0; i<CHARNUM; i++)
        caratteri[i]=((rand()%26)+'a');
    
    scanf("%d", &enne);
    
    for(i=0; i<CHARNUM; i++)
        if(i % enne == 0)
            printf("%c", caratteri[i]);
            
    printf("\n");
    
}