int ultimoElemento(int vec[], int lu){
  return vec[lu-1];
}

int sommaElementi(int vec[], int l){
  int i, somma=0;
  for(i=0; i<l; i++)
    somma += vec[i];
  return somma;
}

char primaMaiuscola(char vec[], int l){
  int i;
  for(i=0; i<l; i++)
    if(vec[i]<='Z' && vec[i]>='A')
      return vec[i];

  return '\n';
}


