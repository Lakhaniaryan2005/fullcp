#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name;
};
void main()
{
struct student s;
clrscr();
printf("enter id and name is ==>");
scanf("%d%s",&s.id,&s.name);
printf("your id is ==>%d,your name is ==>%d",s.id,s.name);

getch();
}