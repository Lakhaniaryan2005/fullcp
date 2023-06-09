/*
5 6 7 8 9
5 6 7 8 9
5 6 7 8 9
5 6 7 8 9
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
	for(j=5;j<=9;j++)
	{
		printf("%d  ",j);

	}
	printf("\n");

}
getch();
}