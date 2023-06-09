//ternary opertor three vriablaey
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("enter four value ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
(a>b)?(a>c)?(a>d)?printf("a"):printf("d"):(c>d)?printf("c"):printf("d"):
(b>c)?(b>d)?printf("b"):printf("d"):(c>d)?printf("c"):printf("d");


getch();
}