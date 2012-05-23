/*

8) Dato un array di interi, scrivere una funzione che ritorni 1 se l'array contiene solo elementi pari, 0 altrimenti.
*/

int soloPari(int vec[], int l){
    int i;
    
    for(i=0; i<l; i++) if(vec[i] % 2 != 0) return 0;
    
    return 1;
}