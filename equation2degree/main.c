#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int  a,b,c;
  float x1,x2,delta;

   printf("entrer a    ");

 scanf("%d",&a);

  printf("entrer b    ");

 scanf("%d",&b);

  printf("entrer c    ");

 scanf("%d",&c);

    delta = b * b - 4 * a * c;

    if (delta>0){
           x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("les solutions   : %f et %f", x1, x2);
    }
     else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("la solution est : %f", x1);
    }
    else
        printf("equation n a pas de solutions  reelle");


     return 0;
}
