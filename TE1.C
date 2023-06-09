//a to z in do while
#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("this is a to z  ");
a='A';
do
{
	printf("%c\t",a);
	a++;
}while(a<='Z');
getch();
}