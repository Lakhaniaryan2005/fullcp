#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,r,r1,r2,ans;
char a;
clrscr();

printf("r=rectangle\nc=circle\nt=trigal\ns=squre");
printf("\n enter symbol ");
scanf("%c",&a);
switch(a)
{
case 'r':printf("enter 3 value");
	 scanf("%d%d%d",&l,&b,&h);
	 ans=l*b*h;
	 printf("this is rectangle area %f",ans);
	 break;
case 'c':printf("enter 1 value");
	 scanf("%d",&r);
	 ans=3.14*r*r;
	 printf("area is %d",ans);
	 break;
case 't':printf("enter 3 value");
	 scanf("%d%d%d",&r,&r1,&r2);
	 ans=r*r1*r2;
	 printf("tiangal area %d",ans);
	 break;
case 's':printf("enter 1 value");
	 scanf("%d",&r);
	 ans=4*r;
	 printf("area is %d",ans);
	 break;
default :printf("iinvaild numer");
	 break;
}
getch();

}








