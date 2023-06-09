//array with pointer in loop
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[20],n,*p;
clrscr();
printf("enter data size :");
scanf("%d",&n);
p=&n;
for(i=0;i<*p;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<*p;i++)
{
	printf("%d\n",a[i]);
}
getch();
}
