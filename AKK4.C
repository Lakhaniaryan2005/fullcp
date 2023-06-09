//2d array sum
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],j,i,r,c,sum=0;
clrscr();
printf("enter row and colum:");
scanf("%d%d",&r,&c);
printf("enter your %d data",r*c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("your data ");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		sum=sum+a[i][j];
	}
}
printf("your sum %d",sum);
getch();
}