#include <stdio.h>
char main()
{
    char F=0,FML;
    do
    {
        printf("\n%c",F);
        F++;
        if(F%20==0) FML=getch();
    }
    while(F<255);

}
