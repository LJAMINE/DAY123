#include <stdio.h>
#include <stdlib.h>

int main()
{

int n ,i;
printf("entrer le nombre des elements");
scanf("%d",&n);

int tab1[n],copieTab[n];

for(int i=0;i<n;i++) {

    scanf("%d",&tab1[i]);

}

for(i=0;i<n;i++){
    copieTab[i]=tab1[i];

}

for(int i=0;i<n;i++) {

printf("%d",tab1[i]);

}
printf("\n");

for(int i=0;i<n;i++) {
printf("%d",copieTab[i]);


}
printf("\n");


    return 0;
}
