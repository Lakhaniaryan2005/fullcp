//using union
#include<stdio.h>
#include<conio.h>
union student
{
  int a;
};
void main()
{
union student s,ss;
 clrscr();
 s.a=10;
 printf("%d\n",s.a);
 ss.a=20;
 printf("%d",ss.a);
 printf("%d",s.a);
 getch();
}