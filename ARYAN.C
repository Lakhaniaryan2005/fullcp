#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
   int p,r,n;
   float i;
   float total;
 //  clrscr();
printf("enter your vaule three :");
scanf("%d%d%d",&p,&r,&n);
i=(p*r*n)/100;
printf("that is your %f",i);
total=i+p;
//scanf("%f",total);
printf("your final ans %f",total);
getch();
}

