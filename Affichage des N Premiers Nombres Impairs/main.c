#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,i;
    printf(" nombre   positif : ");
    scanf("%d", &n);

    for (i=1;i<=2 * n;i += 2){
        printf("%d",i);
    }
     return 0;
}
