//pilamod in string
//meaning string revers and string same or not same
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int i,l,f=0;
clrscr();
printf("enter your data :");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
	if(a[i]!=a[l-i-1])
	{
		f=1;

	}
}
if(f)
{
	printf("data is not same");
}
else
{
	printf("data is same");
}
getch();
}