//sum in pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*q,*p;
clrscr();
printf("enter your 2 value :");
scanf("%d%d",&a,&b);
q=&b;
p=&a;
printf("%d",*p+*q);
getch();
}
