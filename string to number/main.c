#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];// n for the length of the string; i for counting;

    int n,i, number=1,array[100] ;
    printf("input a string:");
    gets(string); // gets the string
    n=strlen(string); // gets the length of the string

    if(string[0]>='0'&& string[0]<='9' || string[0]=='+' || string[0]=='-');
    else number=0;

    if(number) {for(int i=1;i<n;i++)

            {if(string[i]>='0'&& string[i]<='9');
            else
                {
                number=0;
                break;}
        }}
    i=0;
    if(number)
    {if(string[0]=='+') i++;
    if(string[0]=='-') {printf("\n-"); i++;}

        for(i;i<n;i++)
          {if(string[i]>='0'&& string[i]<='9');
                {array[i]=string[i]-'0'; printf("%d",array[i]);}
        }// Puts the numbers from the string into an array
    }else printf("It's not a number");


}


