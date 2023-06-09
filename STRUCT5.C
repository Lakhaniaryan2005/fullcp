//nested struct three
#include<stdio.h>
#include<conio.h>
struct fist
{
    int a;
};
struct second
{
    int b;
    struct fist f;
};
struct three
{
    int c;
    struct second s;
};
//
void main()
{
   struct three t;
clrscr();
t.c=10;
printf("%d\n",t.c);
 t.s.b=20;
 printf("%d\n",t.s.b);
   t.s.f.a=30;
   printf("%d",t.s.f.a);

getch();
}