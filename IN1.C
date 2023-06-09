//swaping using pointer with fuction
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int a,b,*p,*q;
clrscr();
printf("enter your 2 value :");
scanf("%d%d",&a,&b);
swap(&a,&b);
getch();
}
void swap(int *p,int *q)
{
int c;
c=*p;
*p=*q;
*q=c;
printf("a is =%d\nb is =%d",*p,*q);
}