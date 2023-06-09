//revres using with pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int i, a[20],*p,n,*q;
clrscr();
printf("enter your data size :");
scanf("%d",&n);
q=&n;
printf("enter your data :");
p=a;
for(i=0;i<*q;i++)
{
	scanf("%d",(p+i));
}
printf("your data is ==>");
for(i=n-1;i>=0;i--)
{
	printf("%d\n",*(p+i));
}
getch();
}