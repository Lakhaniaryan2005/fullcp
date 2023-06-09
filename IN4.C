//find length of using string with pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char  a[20],*p;
int i,*q;
clrscr();
printf("enter your data :");
gets(a);
i=strlen(a);
q=&i;
printf("your length ==>%d",*q);
/*
for(j=0;j!='\0';j++)
{
	count++;
}
printf("%d",count)
*/
getch();
}