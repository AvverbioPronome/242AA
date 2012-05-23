void invertiVettore(int vettore[], int l){
    int aux[l];
    int i;
    
    for(i=0; i<l; i++){
        aux[i]=vettore[l-1-i];
    }
    
    vettore=aux;
}