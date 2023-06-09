/*
54321
5432
543
54
5*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,c;

clrscr();
for(i=1;i<=5;i++)
{
	for(c=5;c>=i;c--)
	{
		printf("%d ",c);
	}
	printf("\n");
}

getch();
}