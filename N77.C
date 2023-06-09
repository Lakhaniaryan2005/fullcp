//print a to z
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,count=0;

   clrscr();
   printf("enter your numer");
   scanf("%d",&n);
for(i=1;n!=0;i++)
{
	n=n/10;
	count++;
}
	printf("this is count %d",count);
getch();
}