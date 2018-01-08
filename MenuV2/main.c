#include <stdio.h>
#include <stdlib.h>

int Avarage()
{   system("cls");
    char c1;
    int numbers,count=0;
    float score,avarage,sum=0;
    do
    {printf("\nAmount Of Numbers=");
    scanf("%d",&numbers);}
    while (numbers<1);

    do
    { do
        {
        printf("\nScore=");
        scanf("%f",&score);
        }while(score<2 || score>6);
        sum=sum+score;
        count++;
    }
    while (count<numbers);
    avarage=(float)sum/numbers;
    printf("%.2f",avarage);
    printf("\nPress any button to go back to the main menu");
    c1=getch();
    return;

}
int Fibonacci()
{   system("cls");
    char c1;
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
    printf("\nPress any button to go back to the main menu");
    c1=getch();
    return;

}

int Max()
{   system("cls");
    char c1;
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
    printf("\nPress any button to go back to the main menu");
    c1=getch();
    return;

 }
int opp()
{ system("cls");
int opp=1,end=0;
printf(" >1.Avarage of N Numbers<\n -2.Fibonacci Numbers-\n -3.Max Of N Numbers-\n -4.Exit-");
char c1;
do
{
    c1=getch();
    if(c1==80)
        {opp++; system("cls");}
    else if (c1==72)
        {opp--; system("cls");}
    else system("cls");
    if (opp==5)
        opp=1;
    if (opp==0)
        opp=4;
    if (opp==1)
            printf(" >1.Avarage of N Numbers<\n -2.Fibonacci Numbers-\n -3.Max Of N Numbers-\n -4.Exit-");
    if (opp==2)
            printf(" -1.Avarage of N Numbers-\n >2.Fibonacci Numbers<\n -3.Max Of N Numbers-\n -4.Exit-");
    if (opp==3)
           printf(" -1.Avarage of N Numbers-\n -2.Fibonacci Numbers-\n >3.Max Of N Numbers<\n -4.Exit-");
    if (opp==4)
            printf(" -1.Avarage of N Numbers-\n -2.Fibonacci Numbers-\n -3.Max Of N Numbers-\n >4.Exit<");
}while (c1!=13);

{
    if (opp==1) Avarage();
    if (opp==2) Fibonacci();
    if (opp==3) Max();
    if (opp==4) exit(0);
}
}

int main()
{ int repeat=1;
do
{opp();}
while (repeat>0);
}
