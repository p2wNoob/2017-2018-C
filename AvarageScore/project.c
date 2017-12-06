#include <stdio.h>
int main()

{
    int students,count=0;
    float score,avarage,sum=0;
    do
    {printf("\nStudents=");
    scanf("%d",&students);}
    while (students<1);

    do
    {
        printf("\nScore=");
        scanf("%f",&score);
        sum=sum+score;
        count++;
    }
    while (count<students);
    avarage=(float)sum/students;
    printf("%.2f",avarage);
}
