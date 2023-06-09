#include<stdio.h>
#include<conio.h>
void main()
{
  int account,ba,stat,sp,eco,guj,english,total;
  float per;
  clrscr();

  printf(" enter your marks:");
  scanf("%d%d%d%d%d%d%d",&account,&ba,&stat,&sp,&eco,&guj,&english);
  total=account+ba+stat+sp+eco+guj+english;

  per=total/7;
  printf("%f",per);
  if(per<35)
  {
  printf("\nyour try next time ");
  }
  else
  {
  printf("\nyour pass ");
  }
getch();
}


