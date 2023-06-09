//fuction using for sum
#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two data :");
scanf("%d%d",&a,&b);
sum(a,b);
getch();
}
void sum(int a,int b)
{
int ans;
ans=a+b;
printf("your data sum is ==>%d",ans);
}
