#include<stdio.h>


int main(){

 int n;
 printf("tapez n :");
 scanf("%d",&n);
 for(int i=1; i<=n ; i+=5){
     for(int j=0; j<5;j++){
             printf("%d ",j+i);
     }
 printf("\n");

 }

}
