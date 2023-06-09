#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,m=1;

   clrscr();
   printf("enter your numer");
   scanf("%d",&n);
for(i=1;i<=n;i++)
{
	m=m*i;

}
printf("your muiltipcation is %d",m);
getch();
}