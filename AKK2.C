//insat array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,pos,value;
clrscr();
printf("enter size of array:");
scanf("%d",&n);
printf("enter your %d data",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter pos");
scanf("%d",&pos);
printf("enter value");
scanf("%d",&value);
for(i=n;i>=pos;i--)
{
	a[i+1]=a[i];
}
a[pos]=value;
n++;
printf("your data ");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
getch();
}