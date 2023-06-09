//light bill(invoice)
#include<stdio.h>
#include<conio.h>
void main()
{
int unit,r;
float total,tax,totalpay;
clrscr();
printf("enter your unit ");
scanf("%d",&unit);
if(unit>=50 && unit<100)
{
	r=2;
}
else if(unit>=100 && unit<200)
{
	r=3;
}
else if(unit>=200 && unit<500)
{
	r=4;
}
else if(unit>=500)
{
	r=7;
}
else
{
	r=1;
}
	total=unit*r;
	tax=(total*18)/100;
	totalpay=total+tax;
		printf("this is total %.2f",total);
		printf("\nthis is tax in invoice %.2f",tax);
		printf("\nthis is total pay %.2f",totalpay);
getch();
}