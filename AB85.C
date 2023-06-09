/*
     1
    21
   321
  4321
 54321*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,c,s;

clrscr();
for(i=1;i<=5;i++)
{
	for(s=1;s=6-i;s++)
	{
		printf(" ")
	}
	for(c=i;c>=1;c++)
	{
		printf("%d   ",c);
	}
	printf("\n");
}

getch();
}