//week char ok
#include<stdio.h>
#include<conio.h>

void main()
{
 char day;
clrscr();
printf("S=sunday\nm=monday\nT=tusday\nw=wensday\nt=thursday\nf=friday\ns=saturday");
printf("\n enter numer");
fflush(stdin);
scanf("%c",&day);
switch(day)
{
 case 'S':printf("sunday");
	break;
 case 'm':printf("monday");
	break;
 case 'T':printf("tuesday");
	break;
 case 'w':printf("wensday");
	break;
 case 't':printf("thursday");
	break;
 case 'f':printf("friday");
	break;
 case 's':printf("saturday");
	break;
 default:printf("invalide charter");
	break;
}
getch();
}