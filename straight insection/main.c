#include <stdio.h>
#define n 8

int main()
{
    int numbers[n],i=0,a,temp;

    do
    {
        printf("Number %d is ",i);
        scanf("%d",&numbers[i]);
        i++;
    }while(i<n);

    for(i=0; i<n; i++)
        {
        for(a=i; a>=0; a--)
            {
            if(numbers[a+1]<numbers[a])
            {
                temp=numbers[a];
                numbers[a]=numbers[a+1];
                numbers[a+1]=temp;
            }}}

    for(i=0;i<n;i++)
    printf("\n%d",numbers[i]);

}



