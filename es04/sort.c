#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*   quickSort */
/*  */
/*   This public-domain C implementation by Darel Rex Finley. */
/*  */
/*   * Returns YES if sort was successful, or NO if the nested */
/*     pivots went too deep, in which case your array will have */
/*     been re-ordered, but probably not sorted correctly. */
/*  */
/*   * This function assumes it is called with valid parameters. */
/*  */
/*   * Example calls: */
/*     quickSort(&myArray[0],5); // sorts elements 0, 1, 2, 3, and 4 */
/*     quickSort(&myArray[3],5); // sorts elements 3, 4, 5, 6, and 7 */

int quickSort(int *arr, int elements) {

  #define  MAX_LEVELS  1000

  int  piv, beg[MAX_LEVELS], end[MAX_LEVELS], i=0, L, R ;

  beg[0]=0; end[0]=elements;
  while (i>=0) {
    L=beg[i]; R=end[i]-1;
    if (L<R) {
      piv=arr[L]; if (i==MAX_LEVELS-1) return 0;
      while (L<R) {
        while (arr[R]>=piv && L<R) R--; if (L<R) arr[L++]=arr[R];
        while (arr[L]<=piv && L<R) L++; if (L<R) arr[R--]=arr[L]; }
      arr[L]=piv; beg[i+1]=L+1; end[i+1]=end[i]; end[i++]=L; }
    else {
      i--; }}
  return 1; }

int main(){
    
    int i=0;
    int vettore[20]={0};
    

    for(i=0; i<20; i++){
        vettore[i]=rand()%100;
    }
    
    for(i=0; i<20; i++){
        printf("%d  ", vettore[i]);
    }
    
    printf("\n");
    quickSort(&vettore[0], 20);
    
    for(i=0; i<20; i++){
        printf("%d  ", vettore[i]);
    }    
}