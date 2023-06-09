//size of opreter data size in storge
#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,*p;
float b=10.4,*q;
char c='a',*l;
clrscr();
p=&a;
q=&b;
l=&c;
printf("a ne size=%d\n",sizeof(a));
printf("*p ne size=%d\n",sizeof(p));

	printf("b ne size=%d\n",sizeof(b));
	printf("*q ne size=%d\n",sizeof(q));

		printf("c ne size=%d\n",sizeof(c));
		printf("*l ne size=%d\n",sizeof(l));

printf("\np and a storage value %u=%u",p,&a);

	printf("\nq and b storage value %u=%u",q,&b);

		printf("\nl and c storage value %u=%u",l,&c);
getch();
}
