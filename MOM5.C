//light bill(invoice)
#include<stdio.h>
#include<conio.h>
void main()
{
int u;
float r,total,tax,totalpay;
clrscr();
printf("u=unit");
printf("\nenter unit   ");
scanf("%d",&u);
if(u>=50  &&  u<100)
{
	r=0.50;
}
else if(u>=100  && u<150)
{
	r=0.75;
}
else if(u>=150  &&  u<250)
{
	r=1.20;
}
else if(u>=250)
{
	r=1.50;
}
else
{
	printf("invild numer");
}
total=u*r;
tax=(total*20)/100;
totalpay=total+tax;
printf("your total is %.2f",total);
printf("\n your tax if %.2f",tax);
printf("\nthis is total pay is %.2f",totalpay);


getch();

}