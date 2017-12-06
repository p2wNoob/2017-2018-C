#include <stdio.h>
int main()

{
    int max,a,n,i;
    printf("\nAmountOfNumbers=");
    scanf("%d",&n);
    printf("\nnumber=");
    scanf("%d",&a);
    max=a;
    i=1;
    while(i<n)
    {
        printf("\nnumber=");
        scanf("%d",&a);
        if(max<a)
            max=a;
        i++;
    }
    printf("\nmax=%d",max);
}

