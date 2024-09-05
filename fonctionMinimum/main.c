#include <stdio.h>
#include <stdlib.h>

void fonctionMximum(int a,int b ){
printf("gives a");
 scanf("%d",&a);
 printf("gives b");
 scanf("%d",&b);
 if (a>b){
    printf("a=%d est grand",a);
 }else if(b>a){
     printf("b=%d est grand",b);
 }else if (a=b){
         printf("a=%d et b=%d are the same ",a,b);

 }

}
int main()
{
    fonctionMximum(2,3);
     return 0;
}
