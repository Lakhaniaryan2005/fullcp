//negative numer
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i;
clrscr();
printf("enter size of array:");
scanf("%d",&n);
printf("enter your %d data",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("your nagativ data ");
for(i=0;i<n;i++)
{
	if(a[i]<0)
	{
		printf("%d ",a[i]);
	}
}
getch();
}