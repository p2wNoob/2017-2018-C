#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num; // number in class
    char name[41]; // name
    int marks[100]; //marks for each subjects
    float avr; // avr mark for all subjects
}tstudent; //defining type student

void mywrite(char *fname) //Function which writes the user input in the file
{system("cls");
    FILE *f;
    int i,n;
    float avr;
    tstudent student;
    char temp[100],ok;
    if(f=fopen(fname,"r"))
        {printf("This file already exists. Press 1 if you want to overwrite it and any other key if you don't\n");
        ok=getch();}

    if(ok=='1')
    {f=fopen(fname,"wb");
    for(;;)
    {
        printf("Number in class:");
        scanf("%d",&student.num); gets(temp); if(student.num==0) break;
        printf("\nName of the student:");
        gets(student.name);
        for(i=0;;i++)
        {
            do
            {printf("\nWhat mark does the student have in subject %d. Press 0 once have input all the marks",i+1);
            scanf("%d",&student.marks[i]);}
            while(student.marks[i]<0 || student.marks[i]==1 || student.marks[i]>6);
            if(student.marks[i]==0)
                break;
        }
        avr=0;
        for(n=0;n<i;n++)
        {
            avr=avr+student.marks[n];
        }avr=avr/n;
        student.avr=avr;
        fwrite(&student,sizeof(student),1,f);
    }fclose(f);
}
}

void myread(char *fname) //Function which prints the text from the file on the screen
{   system("cls");
    FILE *f;
    tstudent student;
    f=fopen(fname,"rb");
    if(f)
    {
        while(!feof(f))
        {if(fread(&student,sizeof(student),1,f))
            {printf("\nNum:%d Name:%-10s",student.num,student.name);
            int i=0;
             while(student.marks[i]!=0)
             {
                 printf(" Sub%d: %d",i+1,student.marks[i]);
                 i++;
             }
            printf("  Avarage:%.2f",student.avr);
            }}}else printf("Error!");
            getch();
}

void myadd(char *fname) //Function which adds the input from the user to the end of the file
{system("cls");
    FILE *f;
    int i,n;
    tstudent student;
    char temp[100];
    float avr;
    f=fopen(fname,"ab");
    for(;;)
    {
        printf("Number in class:");
        scanf("%d",&student.num); gets(temp); if(student.num==0) break;
        printf("\nName of the student:");
        gets(student.name);
        for(i=0;;i++)
        {
            do
            {printf("\nWhat mark does the student have in subject %d. Press 0 once have input all the marks",i+1);
            scanf("%d",&student.marks[i]);}
            while(student.marks[i]<0 || student.marks[i]==1 || student.marks[i]>6);
            if(student.marks[i]==0)
                break;
        }
        avr=0;
        for(n=0;n<i;n++)
        {
            avr=avr+student.marks[n];
        }avr=avr/n;
        student.avr=avr;
        fwrite(&student,sizeof(student),1,f);
    }fclose(f);
}



void mychange(char *fname)
{   system("cls");
    char newfname[100];
    printf("What's the name of the new file:");
    gets(newfname);
    strcpy(fname, newfname);
}

void opp(char *fname)
{
int opp=1;
char c1;
do
{   system("cls");
    if (opp==1) printf(">1.Write<\n");
    else        printf("-1.Write-\n");
    if (opp==2) printf(">2.Read<\n");
    else        printf("-2.Read-\n");
    if(opp==3)  printf(">3.Add<\n");
    else        printf("-3.Add-\n");
    if(opp==4)  printf(">4.Change file<\n");
    else        printf("-4.Change file-\n");
    if(opp==5) printf(">5.Exit<");
    else        printf("-5.Exit-");

    c1=getch();
    if(c1==-32)
        {c1=getch();
        if (c1==80)
        {opp++;}
        else if (c1==72)
        {opp--;}}

    if (opp==6)
        opp=1;
    if (opp==0)
        opp=5;

}while (c1!=13);

 {
    if (opp==1) mywrite(fname);
    if (opp==2) myread(fname);
    if (opp==3) myadd(fname);
    if (opp==4) mychange(fname);//function which changes the file we are working with to the one the user inputs
    if (opp==5) exit(0); //exit the program
}
}

int main()
{
    char fname[100];
    printf("What's the name of the file you want to work with:");
    gets(fname);

    for(;;)//make it so the program only stops when the exit option is selected
    opp(fname);

}
