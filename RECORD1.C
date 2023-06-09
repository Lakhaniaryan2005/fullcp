//student record in struct
#include<stdio.h>
#include<conio.h>
struct student
{
  int id,age,std;
  char school[20],name[20],course[20],city[20];
};
void main()
{
 struct student s;
  clrscr();
printf("enter your id\n");
scanf("%d",&s.id);

  printf("enter your name\n");
  scanf("%s",&s.name);

    printf("enter your age\n");
    scanf("%d",&s.age);

      printf("enter your course\n");
      scanf("%s",&s.course);

    printf("enter your city\n");
    scanf("%s",&s.city);

  printf("enter your std\n");
  scanf("%d",&s.std);

printf("enter your school\n");
scanf("%s",&s.school);
//print data user
printf("your id is==>%d\n",s.id);

  printf("your name is==>%s\n",s.name);

    printf("your age is==>%d\n",s.age);

      printf("your course is==>%s\n",s.course);

    printf("your city is==>%s\n",s.city);

  printf("your std is==>%d\n",s.std);

printf("your school is==>%s\n",s.school);

getch();
}