//muiltipction table
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,ans;
clrscr();
printf("enter data ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
	ans=n*i;
	printf("%d*%d=%d\n",n,i,ans);
}
getch();
}