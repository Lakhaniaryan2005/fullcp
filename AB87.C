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
		printf("%d ",c);
	}
	printf("\n");
}

getch();
}