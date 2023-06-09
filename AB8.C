/*
5
45
345
2345
12345*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,c;

clrscr();
for(i=1;i<=5;i++)
{
	for(c=6-i;c<=5;c++)
	{
		printf("%d   ",c);
	}
	printf("\n");
}

getch();
}