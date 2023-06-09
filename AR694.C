//(x+y+z)3
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,ans;
clrscr();
printf("enter your three value  ");
scanf("%d%d%d",&x,&y,&z);
ans=(x+y+z)*(x+y+z)*(x+y+z);
printf("that is your ans =%d",ans);
getch();
}