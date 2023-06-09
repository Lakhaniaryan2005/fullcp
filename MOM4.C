#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("S=sunday\nm=monday\nT=tusday\nw=wensday\nt=tushday\nf=friday\ns=straday");
printf("\nenter symbol  ");
scanf("%c",&a);
switch(a)
{
case 'S':printf("sunday");
	 break;
case 'm':printf("monday");
	 break;
case 'T':printf("tusday");
	 break;
case 'w':printf("wensday");
	 break;
case 't':printf("tushday");
	 break;

case 'f':printf("friday");
	 break;

case 's':printf("starday");
	 break;
default :printf("iinvaild numer");
	 break;
}


getch();

}