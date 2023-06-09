//revars in 1D array in loop
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[20],n;
clrscr();
	printf("enter your data size ");
	scanf("%d",&n);
printf("enter your %d data ",n);
for(i=0;i<n;i++)
{
		scanf("%d",&a[i]);
}
printf("your data\n");
for(i=n-1;i>=0;i--)
{
		printf("%d ",a[i]);
}
getch();
}