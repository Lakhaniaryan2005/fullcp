/*
     $
    #$
   $#$
  #$#$
 $#$#$ */
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
	for(j=i;j>=1;j--)
	{
		if(j%2==0)
		{
			printf("# ");
		}
		else
		{
			printf("$ ");
		}

	}
	printf("\n");
 }

 getch();
}