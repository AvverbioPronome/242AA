#include <stdio.h>

int main(){
    
    int i=0, j=0;
    int matrice[3][4]={{2,3,5,7},{11,13,17,23},{29,31,37,41}};
    int somma=0;
    

    for(i=0; i<3; i++){
        somma=0;
        for(j=0; j<4; j++){
            somma+=matrice[i][j];
        }
        printf("Somma della riga: %d\n", somma);
    }
    
    for(i=0; i<4; i++){
        somma=0;
        for(j=0; j<3; j++){
            somma+=matrice[j][i];
        }
        printf("Somma della colonna: %d\n", somma);
    }
    
}