/*
11,22,33,44,55
11,22,33,44,55
11,22,33,44,55
11,22,33,44,55
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
printf("this is pattern\n");
for(i=1;i<=4;i++)
{
	for(j=11;j<=55;j=j+11)
	{
		printf("%d  ",j);

	}
	printf("\n");

}
getch();
}