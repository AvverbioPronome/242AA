#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARNUM 100

int main(){
    int numeri[CHARNUM];
    int *nn[CHARNUM]={NULL};
    int i=0;
    int enne=0;
    
    int counter=0;
    
    srand(time(NULL));
    
    for(i=0; i<CHARNUM; i++)
        numeri[i]=rand()%1000;
    
    scanf("%d", &enne);
    
    for(i=0; i<CHARNUM; i++){
        if(numeri[i] % enne == 0){
            nn[counter++] = &numeri[i];
        }
    }
    
    for(i=0; i<counter; i++){
        printf("%d\n", *nn[i]);
    }
    
    printf("\n");
    
}