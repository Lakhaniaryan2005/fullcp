//calc
#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 float ans;
clrscr();
printf("1=+\n2=-\n3=*\n4=/\n5=%");
printf("\n enter 2 numer");
scanf("%d%d",&a,&b);
printf("\nenter numer in 1 to 5 ");
scanf("%d",&c);
switch(c)
{
 case 1:   ans=a+b;
		printf("ans=%f",ans);
	break;
 case 2:   ans=a-b;
		printf("ans=%f",ans);
	break;
 case 3:      ans=a*b;
		printf("ans= %f",ans);
	break;
 case 4:   ans=a/b;
		printf("ans=%f",ans);
	break;
 case 5:      ans=(a*b)/100;
		printf("ans=%f",ans);
	break;
 default:printf("invalide numer");
	break;
}
getch();
}