//array with pointer using
#include<stdio.h>
#include<conio.h>
void main()
{
int i, a[20],*p,n;
clrscr();
printf("enter your data size :");
scanf("%d",&n);
printf("enter your data :");
p=a;
for(i=0;i<n;i++)
{
	scanf("%d",(p+i));
}
printf("your data is ==>");
for(i=0;i<n;i++)
{
	printf("%d\n",*(p+i));
}
getch();
}