#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
      printf("enter ypour 4 value");
      scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
	if(a>c)
	{
		if(a>d)
		{
			printf("a");
		}
		else
		{
			printf("d");
		}
	}
	else
	{
		if(c>d)
		{
			printf("c");
		}
		else
		{
			printf("d");
		}
	}
}
else
{
	if(b>c)
	{
		if(b>d)
		{
			printf("b");
		}
		else
		{
			printf("d");
		}
	}
	else
	{
		if(c>d)
		{
			printf("c");
		}
		else
		{
			printf("d");
		}
	}
}



getch();
}