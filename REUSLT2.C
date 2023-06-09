//find reuslt using struct and for loop
#include<stdio.h>
#include<conio.h>
struct student
{
	int total,n,id,s1,s2,s3,s4,s5;
	  float avg;
	    char name[20],grade;
};
void main()
{
int i;
  struct student s,s1;
     clrscr();
printf("how many student reuslt find enter numer :");
scanf("%d",&s.n);
for(i=1;i<=s.n;i++)
{
printf("\nenter your id and name :");
scanf("%d%s",&s.id,&s.name);
  printf("enter your 5 subject mark :");
  scanf("%d%d%d%d%d",&s.s1,&s.s2,&s.s3,&s.s4,&s.s5);
    s.total=s.s1+s.s2+s.s3+s.s4+s.s5;
    s.avg=s.total/5;
      printf("yourid is ==>%d\nyour name is ==>%s\n",s.id,s.name);
      printf("your total is ==>%d\nyour avg mark is ==>%.2f\n",s.total,s.avg);
	if(s.avg>90 && s.avg<=100)
	{
		printf("A1");
	}
	else if(s.avg>80 && s.avg<=90)
	{
		printf("A2");
	}
	else if(s.avg>70 && s.avg<=80)
	{
		printf("B1");
	}
	else if(s.avg>60 && s.avg<=70)
	{
		printf("B2");
	}
	else if(s.avg>50 && s.avg<=60)
	{
		printf("C1");
	}
	else if(s.avg>33 && s.avg<=60)
	{
		printf("C2");
	}
	else
	{
		printf("F");
	}
}
getch();
}