/*

9) Scrivere una funzione che ricevuto un array di interi, ritorni il numero di elementi pari presenti nell'array
*/

int contaPari(int vec[], int l){
    int i, cnt=0;
    
    for(i=0; i<l; i++) if(vec[i] % 2 == 0) cnt++;
    
    return cnt;
}