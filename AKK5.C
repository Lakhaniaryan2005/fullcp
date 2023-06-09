//tarnsfar 2d array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],j,i,r,c;
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
printf("your data\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d",a[j][i]);
	}
	printf("\n");
}
getch();
}