/*

7) Scrivere una procedura che ricevuto un array di caratteri, trasformi ogni lettera minuscola in maiuscola, lasciando inalterati gli altri caratteri
*/

void strToUpper(char vec[], int l){
    int i;
    for(i=0; i<l; i++){
        if(vec[i]>='a' && vec[i]<='z') vec[i]+= 'A'-'a';
    }
}