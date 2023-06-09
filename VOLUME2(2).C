//marksheet 5 student
//2 program
#include<stdio.h>
#include<conio.h>
union students
{
   int rollno,ch,maths,ph;
   float total,per;
   char name[20];
};
void main()
{
int i;
clrscr();
union students s;
for(i=1;i<=5;i++)
{
printf("\nenter your name and roll numer :");
scanf("%s%d",&s.name,&s.rollno);

printf("enter your chemistry and maths and physics marks :");
scanf("%d%d%d",&s.ch,&s.maths,&s.ph);

s.total=s.ch+s.maths+s.ph;
printf("your total is ==>%.2f",s.total);

s.per=s.total/3;
printf("\nyour percentage is ==>%.2f",s.per);

if(s.per=>35)
{
	printf("\nyour pass");
}
else
{
	printf("\ntry next year");
}
}
getch();
}
