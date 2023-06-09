//sum in loop dynamic
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,array[20],sum=0;
 clrscr();
 printf("enter your data size: ");
 scanf("%d",&n);
 printf("enter your %d data ",n);
 for(i=0;i<n;i++)
 {
	scanf("%d",&array[i]);
 }
 printf("your data");
 for(i=0;i<n;i++)
 {
	sum=sum+array[i];

 }
 printf("%d",sum);
getch();
}
