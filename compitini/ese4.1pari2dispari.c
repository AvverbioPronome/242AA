#include <stdio.h>

int main(){
    int numero;
    int morto=0;
    int counter=0, pari=0;
    int aspettadispari=0;
    int posizione_primo_dispari=-1, posizione_cinque=-1;
    
    printf("Dammi dei numeri, dopo ogni pari devono seguire almeno due dispari.\n");
    
    do{
        scanf("%d", &numero);
        
        if(aspettadispari > 0){
            /* voglio un numero dispari */
            if(numero%2==0) morto=1;
            aspettadispari--;
        }else{
            /* può essere qualsiasi cosa */
            if(numero%2==0){
                /* ma se è un pari... */
                pari++;
                aspettadispari=2;
            }
        }
        
        if(posizione_primo_dispari < 0 && numero % 2 != 0)
                        posizione_primo_dispari=counter;
        
        if(numero==5) posizione_cinque = counter;
        
        counter++;
                    
    }while(!morto);
    
    
    printf("Numero di interi pari: %d\n", pari);
    printf("Prima occorrenza di un intero dispari: %d\n", posizione_primo_dispari);
    printf("Ultima occorrenza dell'intero 5 nella sequenza: %d\n", posizione_cinque);
    
}