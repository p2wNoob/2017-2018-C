#include <stdio.h>
#include <stdlib.h>


void Avarage()
{
    system("cls");
    int students,count=0;
    float score,avarage,sum=0;
    do
    {printf("\nStudents=");
    scanf("%d",&students);}
    while (students<1);

    do
    { do
        {
        printf("\nScore=");
        scanf("%f",&score);
        }while(score<2 || score>6);
        sum=sum+score;
        count++;
    }
    while (count<students);
    avarage=(float)sum/students;
    printf("%.2f",avarage);
    return;
}
void Fibonacci()
{   system("cls");
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
    return;

}

void Max()
{   system("cls");
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
    return;

 }
int main()
{
int opp=1,end=0;
printf(" >1.Avarage\n -2.Fibo\n -3.Max\n -4.Exit");
char c1;
do
{
    c1=getch();
    if(c1==80)
        {opp++; system("cls");}
    if (c1==72)
        {opp--; system("cls");}
    else system("cls");
    if (opp==5)
        opp=1;
    if (opp==0)
        opp=4;
    if (opp==1)
            printf(" >1.Avarage\n -2.Fibo\n -3.Max\n -4.Exit");
    if (opp==2)
            printf(" -1.Avarage\n >2.Fibo\n -3.Max\n -4.Exit");
    if (opp==3)
           printf(" -1.Avarage\n -2.Fibo\n >3.Max\n -4.Exit");
    if (opp==4)
            printf(" -1.Avarage\n -2.Fibo\n -3.Max\n >4.Exit");
}while (c1!=13);

{
    if (opp==1) Avarage();
    if (opp==2) Fibonacci();
    if (opp==3) Max();
    if (opp==4) return 0;
}
}


