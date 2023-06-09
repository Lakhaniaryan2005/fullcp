// array 1d in loop
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,array[20];
 clrscr();
 printf("enter your data size: ");
 scanf("%d",&n);
 printf("enter your %d data",n);
 for(i=0;i<n;i++)
 {
	scanf("%d",&array[i]);
 }
 printf("your data");
 for(i=0;i<n;i++)
 {
	printf("%d\n",array[i]);
 }
getch();
}