//delete areey
#include<stdio.h>
#include<conio.h>
void main()
{
int j,n,pos,value,i,a[10];

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
for(i=0;i<n;i++)
{
	if(i==pos)
	{
		for(j=i;j<n;j++)
		{
			a[j]=a[j+1];
		}
	}
}
n--;
for(i=0;i<n;i++)
{
	printf("%d:",a[i]);
}
getch();
}