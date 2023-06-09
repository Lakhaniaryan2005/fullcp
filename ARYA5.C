#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
	printf("enter 5 value ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
(a>b)?(a>c)?(a>d)?(a>e)?printf("a"):printf("e"):(d>e)?printf("d"):printf("e"):(c>d)?(c>e)?printf("c"):printf("e"):(d>e)?printf("d"):printf("e"):
(b>c)?(b>d)?(b>e)?printf("b"):printf("e"):(d>e)?printf("d"):printf("e"):(c>d)?(c>e)?printf("c"):printf("e"):(d>e)?printf("d"):printf("e");

getch();
}