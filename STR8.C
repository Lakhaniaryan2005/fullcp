//strcmp program
//string same or not some
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int i;
clrscr();
printf("enter your data :");
scanf("%s%s",&a,&b);
i=strcmp(a,b);
if(i==0)
{
	printf("data is same");
}
else
{
	printf("data is not same");
}

getch();
}