#include <stdio.h>

int main()
{
    int numbers[8], i=0,r=0,a;

    do
    {printf("\nGive me a number");
     scanf("%d",&numbers[i]);
     i++;}
     while(i<8);
     do
        i=0;
     {do
        {
            if (numbers[i]>numbers[i+1])
            {a=numbers[i];
            numbers[i]=numbers[i+1];
            numbers[i+1]=a;
            i++;}
            i++;
        }while(i<8);
        r++
     }while(r<8)'
     i=0;
     do
     {
         printf("\n%d",numbers[i]);
         i++;
     }while(i<8);
}
