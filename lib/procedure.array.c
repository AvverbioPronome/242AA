void stampaArray(char vec[], int l){
  int i;
  for(i=0; i<l; i++)
    printf("%c ", vec[i]);
}

void stampaArrayInt(int vec[], int l){
  int i;
  for(i=0; i<l; i++)
    printf("%d ", vec[i]);
}

void azzeraElementi(int vec[], int l){
  int i;
  for(i=0; i<l; i++)
    vec[i]=0;
}

void utenteCheRiempie(int vec[], int l){
  int i;
  for(i=0; i<l; i++){
    printf("%d: ", i);
    scanf("%d", &vec[i]);
  }
}

void utenteCheRiempieChar(char vec[], int l){
  int i;
  for(i=0; i<l; i++){
    printf("%d: ", i);
    scanf("%c", &vec[i]);
  }
}
