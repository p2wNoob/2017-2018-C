#include <stdio.h>
int main()

{
    long long int number1=1,number2=1,count=0,place;
    do
    {printf("Poreden Nomer="); scanf("%lld",&place);}
    while (place<1);
    if(place!=1)
    {
    do
    {
        number1=number1+number2;
        number2=number1+number2;
        count++;
    }
    while (count<place/2);
    if (place%2==1)
        printf("\nThe number is %lld",number2);
    else
        printf("\nThe number is %lld",number1);
    } else printf("\nThe number is 1");
}
