//calc
#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b;
 char w;
 float ans;
clrscr();
printf("\n enter 2 numer");
scanf("%d%d",&a,&b);
printf("+=addition\n-=minus\n*=muiltiplication\n/=division");
printf("\nenter your char:");
fflush(stdin);
scanf("%c",&w);
switch(w)
{
 case '+':   ans=a+b;
		printf("ans=%f",ans);
	break;
 case '-':   ans=a-b;
		printf("ans=%f",ans);
	break;
 case '*':      ans=a*b;
		printf("ans= %f",ans);
	break;
 case '/':   ans=a/b;
		printf("ans=%f",ans);
	break;
 default:printf("invalide numer");
	break;
}
getch();
}