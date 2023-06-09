//empoley record in struct
#include<stdio.h>
#include<conio.h>
struct emp
{
  int id,age,exprience;
  char role[20],companyname[20],name[20],city[20];
};
void main()
{
 struct emp s;
  clrscr();
printf("enter your id\n");
scanf("%d",&s.id);

  printf("enter your name\n");
  scanf("%s",&s.name);

    printf("enter your age\n");
    scanf("%d",&s.age);

      printf("enter your role\n");
      scanf("%s",&s.role);

    printf("enter your city\n");
    scanf("%s",&s.city);

  printf("enter your exprience\n");
  scanf("%d",&s.exprience);

printf("enter your company name\n");
scanf("%s",&s.companyname);

//print data user
printf("your id is==>%d\n",s.id);

  printf("your name is==>%s\n",s.name);

    printf("your age is==>%d\n",s.age);

      printf("your role is==>%s\n",s.role);

    printf("your city is==>%s\n",s.city);

  printf("your experience is==>%d\n",s.exprience);

printf("your company name is==>%s\n",s.companyname);

getch();
}