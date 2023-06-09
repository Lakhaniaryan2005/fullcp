#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b;
clrscr();
printf("enter two numer");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d",a);
printf("%d",b);

getch();
}