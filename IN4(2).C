//
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
//printf("your data is ==>");
//for(i=0;i<;i++)
//{
//	printf("%d\n",*(p+i));
//}
getch();
}