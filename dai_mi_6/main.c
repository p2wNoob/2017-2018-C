#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,i,realnum=0,altnum,del=1;
   printf("Number="); scanf("%d",&num);

    do
    {
        if(num%2==0)
        realnum=realnum*10+num%10;
        num=num/10;
   }while (num>0);

num=realnum;realnum=0;
  do
    {
        realnum=realnum*10+num%10;
        num=num/10;
   }while (num>0);

printf("the realnum is %d",realnum);
}

