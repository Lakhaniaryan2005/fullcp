//odd and sum
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
	if(i%2==1)
	{
		printf("this is even numer %d\n",i);
		sum=sum+i;
	}

}
printf("this is sum %d",sum);

getch();
}