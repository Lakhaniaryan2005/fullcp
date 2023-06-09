//reuslt 2 student using struct in c
#include<stdio.h>
#include<conio.h>
struct student
{
	int total,id,s1,s2,s3,s4,s5;
	float avg;
	char name[20],grade;
};
void main()
{
struct student s,s1;
clrscr();
	printf("enter your id and name :");
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
//second student code
printf("\nenter your id and name :");
scanf("%d%s",&s1.id,&s1.name);
	printf("enter your 5 subject mark :");
	scanf("%d%d%d%d%d",&s1.s1,&s1.s2,&s1.s3,&s1.s4,&s1.s5);
		s1.total=s1.s1+s1.s2+s1.s3+s1.s4+s1.s5;
		s1.avg=s1.total/5;
printf("yourid is ==>%d\nyour name is ==>%s\n",s1.id,s1.name);
printf("your total is ==>%d\nyour avg mark is ==>%.2f\n",s1.total,s1.avg);
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
getch();
}