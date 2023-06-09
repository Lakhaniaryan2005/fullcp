//fibonacci series in for loop
#include<stdio.h>
#include<conio.h>
void main()
{
int n1=0,n2=1,n3,i,numer;
clrscr();
printf("enter your data :");
scanf("%d",&numer);
printf("\n%d%d",n1,n2);
for(i=2;i<=numer;i++)
{
	n3=n2+n1;
	printf("%d",n3);
	n1=n2;
	n2=n3;

}

getch();
}