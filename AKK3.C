//delet array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,pos,j;
clrscr();
printf("enter size of array:");
scanf("%d",&n);
printf("enter your %d data",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter pos");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
	if(i==pos)
	{
		for(j=i;j<n;j++)
		{
			a[i]=a[i+1];
		}
	}
}
n--;
printf("your data ");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
getch();
}