//insat areey
#include<stdio.h>
#include<conio.h>
void main()
{
int n,pos,value,i,a[10];

clrscr();
	printf("enter data size ");
	scanf("%d",&n);
printf("enter your %d data ",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter position ");
scanf("%d",&pos);
	printf("enter your value ");
	scanf("%d",&value);
for(i=n-1;i>=pos;i--)
{
	a[i+1]=a[i];
}

a[pos]=value;
n++;
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
getch();
}