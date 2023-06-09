/*
54321
4321
321
21
1*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,c;
clrscr();
for(i=1;i<=5;i++)
{
	for(c=6-i;c>=1;c--)
	{
		printf("%d   ",c);
	}
	printf("\n");
}

getch();
}