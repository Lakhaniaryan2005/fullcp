//dimond pattan in loop for
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
clrscr();
for(i=1;i<=2;i++)
{
	for(s=1;s<=4-i;s++)
	{
		printf(" ");
	}
	for(j=1;j<=3+i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
for(i=1;i<=6;i++)
{
	for(s=1;s<=i;s++)
	{
		printf(" ");
	}
	for(j=1;j<=7-i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
getch();
}