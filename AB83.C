/*
12345
1234
123
12
1*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,c;

clrscr();
for(i=1;i<=5;i++)
{
	for(c=1;c<=6-i;c++)
	{
		printf("%d   ",c);
	}
	printf("\n");
}

getch();
}