#include <stdio.h>

#include "../lib/function.array.h"
#include "../lib/procedure.array.h"

int main(){
  int  vecin[10];
  char vecha[10];

  int i=0;

    utenteCheRiempie(vecin, 10);
    stampaArrayInt(vecin, 10);
    azzeraElementi(vecin, 10);
    stampaArrayInt(vecin, 10);

    printf("\n-----\n");
  

  utenteCheRiempieChar(vecha, 10);

  stampaArray(vecha, 10);
}
