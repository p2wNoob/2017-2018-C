 #include<stdio.h>
 void main()
 {
     int a,b,c;
         printf("\na=");
         scanf("%d",&a);
         printf("\nb=");
         scanf("%d",&b);
         c=a+b;
         a=c-a;
         b=c-a;
         printf("\na=%d",a);
         printf("\nb=%d",b);
 }
