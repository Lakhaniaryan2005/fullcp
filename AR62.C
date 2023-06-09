//sum=(x-y)+(x+y)2
#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,ans;
  clrscr();

  printf("enter your two vlue :");
  scanf("%d%d",&x,&y);
  ans=(x-y)+(x+y)*(x+y);
  printf("that is your ans =%d",ans);
getch();
}
