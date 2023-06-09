//profit and lose.
#include<stdio.h>
#include<conio.h>
void main()
{
  int income,expense;
  clrscr();

  printf(" enter your income and expense:");
  scanf("%d%d",&income,&expense);
  if(income>expense)
  {
  printf("your total profit = ");
  }
  else
  {
  printf("your total lose =");
  }
getch();
}

