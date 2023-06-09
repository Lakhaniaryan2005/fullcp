//take something retun nothing
#include<stdio.h>
#include<conio.h>
void sum(int,int);
void sub(int,int);
void multie(int,int);
void divide(int,int);
void main()
{
int a,b,choice;
clrscr();
printf("enter your two data ");
scanf("%d%d",&a,&b);
printf("1=sum \n2=sub\n3=mul\n4=divine\n");
scanf("%d",&choice);
if(choice==1)
{
	sum(a,b);
}
else if(choice==2)
{
	sub(a,b);
}
else if(choice==3)
{
	multie(a,b);
}
else
{
	divide(a,b);
}
getch();
}
void sum(int x,int y)
{
int ans;
ans=x+y;
printf("sum is ==>%d",ans);
}
void sub(int x,int y)
{
int ans;
ans=x-y;
printf("sub is ==>%d",ans);
}
void multie(int x,int y)
{
int ans;
ans=x*y;
printf("multie is ==>%d",ans);
}
void divide(int x,int y)
{
int ans;
ans=x/y;
printf("divide is ==>%d",ans);
}