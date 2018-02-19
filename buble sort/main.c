#include <stdio.h>

int main()
{
    int i=0,n=8,sorted,c,a,numbers[8];

    do
    {printf("\nGive me a number");
     scanf("%d",&numbers[i]);
     i++;}
     while(i<n);
     for (i=1; i<n; i++)
     {
         sorted=1;
         for(a=0; a<n-i; a++)
            if (numbers[a]>numbers[a+1])
                {
                    sorted=0;
                    c=numbers[a];
                    numbers[a]=numbers[a+1];
                    numbers[a+1]=c;
                }
                if (sorted) break;
     }
     for(i=0;i<n-1;i++)
        printf("\n%d",numbers[i]);
}
