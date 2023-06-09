//pointer simple program and storge value
#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,*p;
clrscr();
p=&a;
printf("%d",*p);
printf("\nstorage value %u=%u",p,&a);
getch();
}
