#include <stdio.h>

int main()
{
    int a,f,b,i=0,n=8,min,numbers[8];

    do
    {printf("\nGive me a number");
     scanf("%d",&numbers[i]);
     i++;}
     while(i<n);

     for(i=0; i<n-1; i++)
     {
        min=numbers[i];
        f=i;
        for(b=i+1; b<n; b++)
        {
            if(min>numbers[b])
            {
                min=numbers[b];
                f=b;
            }
        }
        a=numbers[i];
        numbers[f]=numbers[i];
        numbers[i]=min;


     }
     for(i=0;i<n;i++)
        printf("\n%d",numbers[i]);
}
