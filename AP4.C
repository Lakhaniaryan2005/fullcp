//salary
#include<stdio.h>
#include<conio.h>
void main()
{
int salary,hra,da,ta,ans,ans2,ans3,ans4;
clrscr();
printf("enter tour 4 vlue :");
scanf("%d%d%d%d",&salary,&hra,&da,&ta);
ans=(salary*hra)/100;
ans2=(salary*da)/100;
ans3=(salary*ta)/100;
ans4=ans+ans2+ans3+salary;
printf("that is your salary %d",ans4);
getch();
}
