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
 int i,c,s;

clrscr();
for(i=1;i<=5;i++)
{
	for(s=1;s<=i;s++)
	{
		printf("  ");
	}
	for(c=1;c<=6-i;c++)
	{
		printf("%d ",c);
	}
	printf("\n");
}

getch();
}