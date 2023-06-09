#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[20],n,sum=0;
float ans;
clrscr();
printf("enter your data size:");
scanf("%d",&n);
printf("enter your %d data ",n );
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("your data =");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
	sum=sum+a[i];
}
printf("\n%d",sum);
ans=(sum*n)/100;
printf("\n%f",ans);
getch();
}