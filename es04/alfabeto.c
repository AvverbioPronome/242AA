#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARNUM 100

int main(){
    char a[5];
    char b[3];
    
    int i=0;
 
    for(i=0; i<5; i++)
        scanf(" %c", &a[i]);
    
    for(i=0; i<3; i++)
        scanf(" %c", &b[i]);
        
    for(i=0; i<5; i++)
        if(a[i]<b[0] && a[i]<b[1] && a[i]<b[2])
            printf("A quanto pare, %c viene prima di ogni char in \"b\"\n", a[i]);
        else
            printf("Ahah!\n");
}