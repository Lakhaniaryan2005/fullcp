//voteing with if
#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  clrscr();

  printf("enter your age :");
  scanf("%d",&age);
  if(age>=18)
  {
  printf("you can do it for vote ");
  }
  else
  {
  printf("you can not vote this year");
  }
getch();
}

