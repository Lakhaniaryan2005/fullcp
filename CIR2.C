/*
      5
     45
    345
   2345
  12345   */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
 clrscr();
 for(i=1;i<=5;i++)
 {
	for(s=1;s<=6-i;s++)
	{
		printf("  ");
	}
	for(j=6-i;j<=5;j++)
	{
		printf("%d ",j);

	}
	printf("\n");
 }

 getch();
}
