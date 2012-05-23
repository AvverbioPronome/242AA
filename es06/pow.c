#include <stdio.h>

#include "potenzaRic.h"

int main(){
    int base, pow;
    
    scanf("%d %d", &base, &pow);
    
    printf("%d\n", potenzaRic(base, pow));
    
}