#include <stdio.h>
#include <math.h>

main()  /* ordinare tre numeri interi*/
{
  int a;
  int b;
  int c;
  int temp;

  printf("Immetti tre numeri interi\n");
  scanf("%d%d%d", &a, &b, &c);

  if(a<b)
    { temp = a;
    a = b;
    b = temp;
    printf("%d, %d, %d", a, b, c);}
  else ;
  if (a<c)
    { temp = a;
    a = c;
    c = temp;
    printf("%d, %d, %d", a, b, c);}
  else ;
  if(b<c)
    { temp = b;
    b = c;
    c = temp;
    printf("%d, %d, %d", a, b, c);}
  else ;
}


 
