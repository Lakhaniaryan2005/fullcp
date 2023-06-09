//a! mess 5!=5*4*3*2*1=120;
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,fact=1;
clrscr();
printf("enter your data :");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
	fact*=i;
}
printf("%d",fact);

getch();
}