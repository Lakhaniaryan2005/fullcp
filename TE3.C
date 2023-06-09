//count in do while loop
#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
clrscr();
printf("enter data ");
scanf("%d",&n);
do
{
	n/=10;
	count++;
}while(n!=0);
printf("%d",count);
getch();
}