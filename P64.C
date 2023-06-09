//interest
#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,n;
float i,total;
clrscr();
printf("enter your amount and numer of year ");
scanf("%d%d",&p,&n);
if(p>=100 && p<200 )
{
	r=2;
}
else if(p>=200 && p<300)
{
	r=3;
}
else if(p>=300 && p<500)
{
	r=4;
}
else if(p>=500)
{
	r=5;
}
else
{
	r=1;
}
	i=(p*r*n)/100;
	total=i+p;
		printf("this is yput i %.2f",i);
		printf("\nthis is total %.2f",total);
getch();
}