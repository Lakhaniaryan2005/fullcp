/*
10101
 1010
  101
   10
    1*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,c,s;
clrscr();
for(i=1;i<=5;i++)
{
	for(s=1;s<=i;s++)
	{
		printf("  ");
	}
	for(c=5;c>=i;c--)
	{
		if(c%2==0)
		{
			printf("0 ");
		}
		else
		{
			printf("1 ");
		}
	}
	printf("\n");
}

getch();
}