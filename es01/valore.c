#include <stdio.h>
#define METROQUADRO 1250
#define SALOTTO 3*5
#define CUCINA 4*4
#define LETTO 5*5
#define BAGNO 2*3

main(){
  int prezzo=2*(SALOTTO+CUCINA+LETTO+BAGNO)*METROQUADRO;
  printf("Il prezzo della casa è %d\n", prezzo);

}
