//enumeration
#include<stdio.h>
#include<conio.h>
enum day{mon,tus,wen,thu,fri,sut=1,sun};
void main()
{
 enum day d;
clrscr();
d=mon;
printf("%d\n",d);
d=tus;
printf("%d\n",d);
d=wen;
printf("%d\n",d);
d=thu;
printf("%d\n",d);
d=fri;
printf("%d\n",d);
d=sut;
printf("%d\n",d);
d=sun;
printf("%d\n",d);



getch();
}