/*
12345
 2345
  345
   45
    5*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,c,s;
clrscr();
for(i=1;i<=5;i++)
{
	for(s=i;s<=5;s++)
	{
		printf("  ");
	}
	for(c=i;c>=5;c++)
	{
		printf("%d ",c);
	}
	printf("\n");
}

getch();
}