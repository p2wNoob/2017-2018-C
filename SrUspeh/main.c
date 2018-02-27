#define maxstudents 25
#define maxsubjects 10

int main()
{
int marks [maxstudents][maxsubjects];
float avrst [maxstudents];
float avrsub [maxsubjects];
float avr;
int students, subjects, i, n, sum1=0,sum2=0;

    //Asking how many students there are
    do
    {
        printf("\nNumber of students:");
        scanf("%d",&students);
    }while(students<1 || students>maxstudents);

    //Asking how many subjects there are
    do
    {
        printf("\nNumber of subjects:");
        scanf("%d",&subjects);
    }while(subjects<1 || subjects>maxsubjects);

    //Asking what the marks are
    for(i=0; i<students; i++)
        {for(n=0; n<subjects; n++)
            {
                do
                {
                printf("\nStudent %d Subeject %d:",i+1,n+1);
                scanf("%d",&marks[i][n]);
                }while(marks[i][n]<2 || marks[i] [n]>6);

            }}
    //Calculating the average marks of each student
    for(i=0; i<students; i++)
        {avr=0;
        {for(n=0; n<subjects; n++)
            avr=avr+marks[i][n];
        }sum1=sum1+avr;
         avrst[i]=avr/subjects;
        }

    //Calculating the average marks for each subject
        for(i=0; i<subjects; i++)
        {avr=0;
        {for(n=0; n<students; n++)
            avr=avr+marks[n][i];
        }sum2=sum2+avr;
         avrsub[i]=avr/students;
        }



    //Calculation avr of all marks
    avr=sum1+sum2;
    avr=avr/(subjects*students);
    avr=avr/2;

    //Printing avr marks for each students, subjects and avr all marks.
    for(i=0; i<students; i++)
    printf("\nAvr student %d=%.2f",i+1,avrst[i]);

    for(i=0; i<subjects; i++)
    printf("\nAvr subject %d=%.2f",i+1,avrsub[i]);

    printf("\nAvr all marks=%.2f",avr);

}
