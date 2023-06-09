#include<stdio.h>
#include<conio.h>
struct distance
{
	int feet;
	float inch;
};
void main()
{
clrscr();
struct distance d,dd,result;
printf("enter 1st distance");
printf("enter ypor feet and inch :");
scanf("%d%f",&d.feet,&d.inch);

printf("enter 2nd distance");
printf("enter ypor feet and inch :");
scanf("%d%f",&dd.feet,&dd.inch);

result.feet=d.feet+dd.feet;
result.inch=d.inch+dd.inch;

while(result.inch>=12.0)
{
	result.inch=result.inch-12.0;
	result.feet++;
}
printf("\ntotal distance is ==>%d'-%.2f",result.feet,result.inch);
getch();
}