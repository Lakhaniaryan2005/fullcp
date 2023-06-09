//multipl pointer in program
#include<stdio.h>
#include<conio.h>
void main()
{
int a,*p,**q,***r,****s;
clrscr();
printf("enter your 1 value :");
scanf("%d",&a);
p=&a;
printf("%d\n",*p);
q=&p;
printf("%d\n",**q);
r=&q;
printf("%d\n",***r);
s=&r;
printf("%d",****s);
getch();
}








