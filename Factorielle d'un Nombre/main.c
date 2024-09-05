#include <stdio.h>
#include <stdlib.h>

int main()
{

 int n,i;
 float factorielle=1;

 printf("    nombre entier positif : ");
    scanf("%d", &n);

    if (n<0){
        printf("pas de factoriell");

    }else{
    for(i=1;i<=n;i++){
        factorielle*=i;
    }
    printf(" n=%d est factorielle=%f ",n,factorielle);
    }
      return 0;
}
