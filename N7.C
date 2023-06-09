//sum in loop
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,sum=0;

   clrscr();
   printf("enter your numer");
   scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=sum+i;

}
printf("your sum is %d",sum);
getch();
}