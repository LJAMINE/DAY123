#include <stdio.h>
#include <stdlib.h>


  int sommeFunction(int a,int b){


 printf("gives a");
 scanf("%d",&a);
 printf("gives b");
 scanf("%d",&b);
   return  a+b;



 }

 void multiFunction(int c,int d){

int reesult;
 printf("gives c");
 scanf("%d",&c);
 printf("gives d");
 scanf("%d",&d);
       reesult =c*d ;
       printf("%d",reesult);
 }
int main()
{
       int resultMul;
    int result;
    result=sommeFunction(1,2);
    printf("result is %d" ,result );

    multiFunction(2,2);

     return 0;
}
