//even numer in loop
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;

   clrscr();
   printf("enter your numer");
   scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
		printf("this is even numer %d\n",i);
	}

}

getch();
}