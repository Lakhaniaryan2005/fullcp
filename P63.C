#include<stdio.h>
#include<conio.h>

void main()
{
 int day;
clrscr();
printf("1=sunday\n2=monday\n3=tusday\n4=wensday\n5=thursday\n6=friday\n7=saturday");
printf("\n enter numer");
scanf("%d",&day);
switch(day)
{
 case 1:printf("sunday");
	break;
 case 2:printf("monday");
	break;
 case 3:printf("tuesday");
	break;
 case 4:printf("wensday");
	break;
 case 5:printf("thursday");
	break;
 case 6:printf("friday");
	break;
 case 7:printf("saturday");
	break;
 default:printf("invalide numer");
	break;
}
getch();
}